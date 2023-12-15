#include<stdio.h>

int main(){

    char name[20],cast[20];

    printf("Enter your name?");
    scanf("%s",name);
    printf("Enter your cast?");
    scanf("%s",cast);
    printf("My name is %s %s", name,cast);

    return 0;
}