#include<stdio.h>
int main(){

    int number, last_number, sum=0;

    printf("Enter number :\n");
    scanf("%d",&number);

    while(number!=0){
        last_number = number % 10;
        sum = sum + last_number;
        number = number /10;
    }

    printf("Sum of digit is %d", sum);

    return 0;
}