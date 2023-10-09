#include <stdio.h>
int main()
 { int a[5];  //all elements containing grabage value
 a[1] = 5; //remaining values contain garbage value 

   int b[] = { 4,5}; //completely okay
   //int c[3] = {1,2,3,5,6,7,8,9,10}; // error excess elements in an array
   int d[3] = {1,2}; // if we decalre while initializing, then the remaining values gets 0 


        return 0;
    }