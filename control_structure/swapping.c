#include<stdio.h>

int main(){

    int a,b,temp;

    printf("enter a first number");
    scanf("%d",&a);
    printf("enter a second number");
    scanf("%d",&b);

    temp = a;
    a=b;
    b=temp;

    printf("a=%d b=%d", a,b);
    
    return 0;
}