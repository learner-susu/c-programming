#include<stdio.h>

int main(){

    int i,sum=0,mask[10];
    float avrage;

    printf("Enter mask of student\n");

    for(i=0; i<10; i++){
        scanf("%d",&mask[i]);
    }

       printf("adding the value of sum :\n");

    for(i=0; i<10; i++) {
       sum = sum+mask[i];
    }
    avrage = sum/10;

    printf("Sum of mask :%d\n", sum);
    printf("avrage of mask :%f\n", avrage);

    return 0;
}