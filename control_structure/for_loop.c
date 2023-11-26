#include<stdio.h>

int main(){

    int i,n,c=0;

    printf("Enter any number");
    scanf("%d",&n);

    for(i=1;i<=n;i++){

        if(n%i==0) 
        {

            printf("%d \n",i);
            c=c+1;
        }
    }
    printf("Total number is %d\n",c);
    return 0;
}