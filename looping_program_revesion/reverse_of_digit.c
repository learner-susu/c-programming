#include<stdio.h>

int main(){

    int number, last_number, reverse_number = 0;

    printf("Enter number :\n");
    scanf("%d",&number);

    while(number != 0){
        last_number = number %10;
        reverse_number = reverse_number *10 + last_number;
        number = number /10;
    }

    printf("Reverse number is %d", reverse_number);

    return 0;
}