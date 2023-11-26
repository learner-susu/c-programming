#include<stdio.h>

int main(){

    int n,r,s=1;

    printf("Enter any number");
    scanf("%d",&n);

    while(n!=0){

        r=n%10;
        s=s*r;
        n=n/10;

    }

    printf("Product number is %d\n",s);

    return 0;
}