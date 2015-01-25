import java.util.*;
class LargestPalindromeResult{
    long product, largest;
    void findLargest(){
        int i=100,j=100;
        
        boolean b = false;
        for(i=999;i>99;i--)
            for(j=i;j>99;j--){
                product = i*j;
                b=checkPalindrome(product);
                if(b==true && largest<product){
                    largest = product;
                    System.out.
                    println("The current palindrome is :"+largest);
                }                
            }
        
        System.out.println("The largest palindrome is " + largest);
    }
    boolean checkPalindrome(long product){
        int t=0,size=0,front=0,rear=0;
        long temp=product;
        
        //define an Arraylist to hold product digits
        ArrayList<Integer> a = new ArrayList<Integer>();
        
        while(temp>0){
            t = (int)temp % 10;
            temp = temp/10;
            //add digits to arraylist
            a.add(t);
        }
        
        size = a.size();
        front = 0;
        rear = size -1;
        
        while(front <= rear){
            /*compare the first and last elements. 
   increment first and decrement last.
   till the current front get past current rear 
            or the element at first and last doesnt match. */
            if(a.get(front++) == a.get(rear--))                
                continue;
            else
                return false;
        }
        return true;
    }
}
class Test4{
    public static void main(String [] args){
        LargestPalindromeResult x = new LargestPalindromeResult();
        x.findLargest();
    }
}