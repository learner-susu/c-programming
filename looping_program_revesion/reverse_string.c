#include <stdio.h>
#include<string.h>
int main() {
    int l,i,j;
    char s1[30],c;
    
    printf("Enter your string\n");
    scanf("%s",s1);
    l = strlen(s1);
    
    for(i=0; i<l/2; i++){
        c=s1[i];
        s1[i]=s1[l-1-i];
        s1[l-1-i]=c;
    }
    
    /*for(i-0;j=l-1,i<j;i++,j--){
        c=s1[i];
        s1[i]=s1[j];
        s1[j]=c;
    }*/
    
    printf("%s is reverse string\n", s1);
    return 0;
}