#include<stdio.h>

int main(){

    int n,r,s=0,o;

    printf("Enter any number");
    scanf("%d",&n);

    o=n;
    while(n!=0){

        r=n%10;
        s=s*10+r;
        n=n/10;
    }

    if(o==s){

        printf("%d\n is a palindrome number",o);
    }else{
        printf("%d\n is not palindrome number",o);
    }
    return 0;
}