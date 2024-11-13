#include<stdio.h>

int main(){
    int a;

    printf("enter your number");
    scanf("%d is your number",&a);

    if( a>=45){
        printf("%d is pass marks",a);
    }else{
        printf("%d is fail",a);
    }
    
    return 0;
}