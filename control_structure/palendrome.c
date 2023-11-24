#include<stdio.h>

int main(){

    int n,origin_number,reverse_number;

    printf("Enter any number");
    scanf("%d",&n);

    origin_number = n;
    reverse_number = 0;

    while(n>0){
        reverse_number = reverse_number * 10 + n % 10;
        n = n / 10;
    }

    if(reverse_number == origin_number){
        printf("%d is a palendrome number",origin_number);
    }else{
        printf("%d is a not palendrome number",origin_number);
    }

    return 0;

}