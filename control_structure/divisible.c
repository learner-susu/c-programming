#include<stdio.h>

int main(){

    int n,a,b;

    printf("enter number");
    scanf("%d",&n);

    a=n%5;
    b=n%7;

    if(a==0 && b==0){

        printf("%d is divisible number",n);

    } else{
        printf("%d is not divisible number",n);
    }


    return 0;
}