#include<stdio.h>

void main(){

    float p;
    printf("Enter Percentage");
    scanf("%f",&p);

    if(p>=40){
        printf("%f is pass",p);
    } else{
        printf("%f is fail",p);
    }

    getch();
}