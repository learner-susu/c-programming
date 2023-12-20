#include<stdio.h>

int main(){

    int mask;

    printf("Enter mask");
    scanf("%d",&mask);

    if (mask >90 ){
        printf("This is Outstanding mask %d", mask);
    }
    else if(mask >40){
      printf("This is pass mask %d", mask);
    }
    else{
        printf("This mask is fail %d", mask);
    }
    return 0;
}