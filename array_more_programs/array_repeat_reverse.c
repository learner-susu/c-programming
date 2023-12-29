#include<stdio.h>

int main(){

    int a[5],i;

    printf("Enter number\n");

    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }

    printf("You enterned value of array are given below :\n");

    for(i=4; i>=0; i--){
        printf("reverse array element at index is %d :%d\n", i,a[i]);
    }
    return 0;
}