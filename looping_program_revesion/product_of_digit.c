#include<stdio.h>

int main(){

    int number, last_number, product = 1;

    printf("Enter number :\n");
    scanf("%d",&number);

    while(number != 0){
        last_number = number % 10;
        product = product * last_number;
        number = number / 10;
    }

    printf("Product of number is %d", product);

    return 0;
}