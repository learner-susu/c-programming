#include<stdio.h>

int main(){

    int i=1,n,s=0;

    printf("Enter any number");
    scanf("%d",&n);

    while(i<=n){

        printf("%d\n",i);
        s=s+i;
        i=i+1;

    }
    printf("Sum is %d\n",s);

    return 0;
}