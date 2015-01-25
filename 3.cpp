// Program to print all prime factors
# include <stdio.h>
# include <math.h>
#include<iostream>
using namespace std;
// A function to print all prime factors of a given number n

 
/* Driver program to test above function */
int main()
{
    
const long numm = 600851475143;
long newnumm = numm;
long largestFact = 0;
 
int counter = 2;
while (counter * counter <= newnumm) {
    if (newnumm % counter == 0) {
        newnumm = newnumm / counter;
        largestFact = counter;
    } else {
        counter++;
    }
}
if (newnumm > largestFact) { // the remainder is a prime number
    largestFact = newnumm;
}
cout<<largestFact;



    return 0;
}
