#include<stdio.h>
#include<string.h>

int main(){
    int value;
    char string1[30];
    char string2[30];

    printf("Enter first string :\n");
    scanf("%s", string1);
    printf("Enter second string :\n");
    scanf("%s", string2);

    value = strcmp(string1,string2);

    if(value == 0){
        printf("same string\n");
    } else{
        printf("Not same string\n");
    }

    printf("%d\n",value);

    return  0;

}