#include <stdio.h>

//void add (int sum){
int add(int sum){
    int first_number, last_number;
    /*printf("Enter a first number");
    scanf("%d",&first_number);
    printf("Enter a second number");
    scanf("%d",&last_number);
    */
   // printf("Enter 2 number");
   // scanf("%d %d",&first_number, &last_number);
     sum = first_number + last_number;
     //printf("Sum is %d",sum);
    return sum;
}
int main() {
    int number,a,b,sum;
    printf("Enter a first number");
    scanf("%d",&a);
    printf("Enter a second number");
    scanf("%d",&b);
    number = a+b;
    printf("Sum of %d", number);
     sum=add(number);
      //printf("Sum is %d",sum);
    
    return 0;
}