#include<stdio.h>

int main(){

    int i,n;

    printf("Enter number");
    scanf("%d",&n);

    for(i=1;i<=n;i=i+1)
    {
        printf("%d\t",i);
    }
    return 0;
}