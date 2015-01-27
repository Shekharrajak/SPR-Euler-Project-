#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int sum=0;
	for(int i=1;i<1000;i++){
		if(i%3==0 || i%5==0 ){
			
			sum=sum+i;
		}
		
	}
	cout<<sum;
	return 0;
}
