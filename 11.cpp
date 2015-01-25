//Author:Jinisha Venish
//What is the greatest product of four adjacent numbers on the same straight line in the 20 by 20 grid
#include<stdio.h>
int main(){
    FILE *f_read;
    int grid[20][20];
    int i,j,m,n,product,new_prod,a,b,c,d,num;
    new_prod=1;
    product=1;
    f_read=fopen("inputpe011.txt","r");
    int x=0,y=0;
    while(fscanf(f_read,"%d",&num)==1){
        grid[x][y]=num;
        y++;
        if(y==20)   {   x++;    y=0;    }
    }
    //Horizontally
    for(i=0;i<20;i++){
        for(j=0;j<17;j++){
            product=1;
            for(m=j;m<(j+4);m++)    product=grid[i][m]*product;
            if(product>=new_prod){
                new_prod=product;
                a=grid[i][j];b=grid[i][j+1];c=grid[i][j+2];d=grid[i][j+3];
            }
        }
    }
    //Vertically
    for(j=0;j<20;j++){
        for(i=0;i<17;i++){
            product=1;
            for(n=i;n<(i+4);n++)    product=product*grid[n][j];
            if(product>=new_prod){
                new_prod=product;
                a=grid[i][j];b=grid[i+1][j];c=grid[i+2][j];d=grid[i+3][j];
            }
        }
    }
    //"Diagonal Left to Right";
    for(i=0;i<17;i++){
        for(j=0;j<17;j++){
            m=i;n=j;
            product=1;
            while(m<=(i+3) && n<=(j+3) )    product=product* grid[m++][n++];
            if(product>=new_prod){
                new_prod=product;
                a=grid[i][j];b=grid[i+1][j+1];c=grid[i+2][j+2];d=grid[i+3][j+3];
            }
        }
    }
    //"Diagonal Right to Left";
    for(i=0;i<=16;i++){
        for(j=19;j>=3;j--){
            m=i;n=j;
            product=1;
            while(m<=(i+3) && n>=(j-3))     product=product* grid[m++][n--];
            if(product>=new_prod){
                new_prod=product;
                a=grid[i][j];b=grid[i-1][j-1];c=grid[i-2][j-2];d=grid[i-3][j-3];
            }
        }
    }
    printf("%d",new_prod);
    return 0;
}
