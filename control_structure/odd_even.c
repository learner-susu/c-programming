#include<stdio.h>

int main(){

    int n,a;

    printf("Enter a number");
    scanf("%d",&n);

    a=n%2;

    if(a==0){

        printf("%d is even number",n);
    } else{

        printf("%d is odd number",n);
    }

    return 0;
}