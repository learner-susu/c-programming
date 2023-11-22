#include<stdio.h>
#include<string.h>

int main(){

    char a[10],b[10],c[10];
    int x,y,z;
    printf("Enter 3 string");
    scanf("%s %s %s",a,b,c);

    x=strlen(a);
    y= strlen(b);
    z=strlen(c);

    if(x>y && x>z){
        printf("longest string is %s",a);

    }else if(y>x && y>z){
        printf("longest string is %s",b);

    }else if(z>x && z>y){
        printf("longest string is %s",c);

    }else{
        printf("Wow , you got our bug");
    }
    return 0;
    
}