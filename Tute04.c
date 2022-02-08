/*Exercise 4 - Functions


Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int main(void) {
   int n1=0, n2=0;
   printf("Enter a value for no 1 : ");
   scanf("%d", &n1);

   printf("Enter a value for no 2 : ");
   scanf("%d", &n2);

   printf("Minimum is :%d\n",minimumm(n1,n2));
   printf("Maximum is :%d\n",maximumm(n1,n2));
   printf("Multiply is %d\n",multiplyy(n1,n2));

   int minimumm(int no1,int no2)
   {
     if(no1>no2)
     return no2;
     else
     return no1;
   }
   int maximumm(int no1,int no2)
   {
     if(no1<no2)
     return no2;
     else
     return no1;

   }
   int multiplyy(int no1,int no2)
   {
     return no1*no2;
   }
   