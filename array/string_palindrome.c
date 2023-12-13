#include<stdio.h>
#include<string.h>
 
 int main(){
    char a[10], b[10];
    int l,i,j=0;

    printf("Enter your choice ");
    scanf("%s",a);

    l=strlen(a)-1;

    for(i=l;i>=0;i--){
        b[j]=a[i];
        j=j+1;
    }
    if(strcmp(a,b)==0){
        printf("%s is palindrome string",a);
    }else{
        printf("%s is not palindrome string",a);
        
    }
    return 0;
 }