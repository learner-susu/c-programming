#include<stdio.h>

int main(){

    int n[10], i;
      printf("Enter number");
    for(i=0;i<10; i++){

      
        scanf("%d\n",&n[i]);
    }
    printf("your number ");
    for(i=0;i<10;i++){
        printf("%d\n",n[i]);
    }
    return 0;
}