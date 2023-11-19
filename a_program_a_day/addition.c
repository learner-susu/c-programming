/*
a program to calculate sum of 2 numbers
*/

#include<stdio.h>

int main(){


    int sum, first_number,second_number;

    printf("enter your first number");
    scanf("%d",&first_number);
    printf(" enter a second number");
    scanf("%d",&second_number);

    sum = first_number + second_number;


    printf("%d is your sum number", sum );


    return 0;
}