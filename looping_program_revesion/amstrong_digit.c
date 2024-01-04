#include<stdio.h>
 int main(){

    int number, last_number, sum = 0, suruko_number ;

    printf("Enter number :\n");
    scanf("%d",&number);

        suruko_number = number;

    while(number != 0){
        last_number = number %10;
        sum =  sum + last_number * last_number * last_number;
        number = number / 10;
    }
    
    if(suruko_number == sum){
        printf("This is amastrong number %d", sum);
    } else{
        printf("This is not amastrong number %d", sum);

    }

    return 0;
 }