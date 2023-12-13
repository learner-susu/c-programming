#include<stdio.h>
int fibo(int);
int main(){
    int a=0,b=1,n;
    printf("Enter Number");
    scanf("%d %d",&a,&b);
    printf("%d %d", a,b);
    fibo (n-2);
    return 0;
}
int fibo(int n){
    static int a=0, b=1,c;
    if(n>0){
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
        fibo(n-1);
    }
    return 0;
}