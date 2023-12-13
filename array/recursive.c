#include<stdio.h>
int recu(int);
int main(){
    int n,b;
    printf("Enter number");
    scanf("%d",&n);

    b=recu(n);
    printf("Factorial number is %d",b);
    return 0;
}

    int recu(n)
    {
    if(n<=1){
        return 1;
    }
    else{
        return n*recu(n-1);
    }
}