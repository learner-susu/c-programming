#include<stdio.h>
 int main (){ 

    float number;

    printf("Enter your number");
    scanf(" %f",&number);

    if(number>=0){
        printf("%f is positive number",number);
    }
    else if(number<=0){
        printf("%f is negative number",number);
    } else{
        printf("%f is zero",number);
    }
    return 0;
 }