#include<stdio.h>

int main(){

    float p;
    

    printf("Enter Percentage");
    scanf("%f",&p);

    if(p>=80){
        printf("%f is distinsion",p);

    }else if(p>=60 && p<=80){
        printf("%f is first division",p);

    }else if (p>=50 && p<=60){
        printf("%f is second division",p);

    }else if(p>=40 && p<=50){
        printf("%f is third division",p);

    }else{
        printf("%f is fail",p);

    }
    return 0;
}


