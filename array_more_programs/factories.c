#include <stdio.h>

int main() {
   int number,remainder,sum;
   printf("Enter any number");
   scanf("%d",&number);
   
  sum = 1;
   while(number>0){
       remainder =  number%10;
       sum= sum*remainder;
       number= number/10;
       
   }
   printf("Product of your number is %d",sum);
    return 0;
}