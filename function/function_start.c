#include<stdio.h>

void namaste();
void bonjour();

int main(){

    char ch;

    printf("Enter f for french and i for indian");
    scanf("%c",&ch);

    if(ch == 'i'){
        printf("Namaste\n");
    }else{
        printf("Bonjour\n");
    }

    return 0;
    
}

void namaste(){
    printf("Namaste\n");
}

void bonjour(){
    printf("Bonjour\n");
}