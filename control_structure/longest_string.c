#include<stdio.h>
#include <string.h>

int main(){

    int x,y,z ;
    char a[20],b[20],c[20];

    printf("Enter 3 world");
    scanf("%s %s %s", a,b,c);

    x=strlen (a);
    y= strlen (b);
    z= strlen (c);

    if(x>y && x>z){

        printf(" %s is a longest string",a);
    }else if(y>x && y>z){

        printf(" %s is a longest string",b);
    }else if(z>x && z>y){

        printf(" %s is a longest string",c);
    }else{

        printf("Thank You");
    }

    return 0;
}