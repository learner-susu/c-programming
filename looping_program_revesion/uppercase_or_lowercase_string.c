#include <stdio.h>
#include<string.h>
int main() {
    char s1[30];
    int i;
    printf("Enter string value :\n");
    scanf("%s",s1);
    
    /*for(i=0; s1[i]!='\0'; i++){
        if(s1[i]>=97 && s1[i]<=122){
            s1[i] = s1[i]-32;
        }
    }
    printf("Value of Uppercase is %s",s1);
    */
    for(i=0; s1[i]!='\0'; i++){
        if(s1[i]>=65 && s1[i]<=90){
            s1[i] = s1[i]+32;
        }
    }
     printf("Value of Lowercase is %s\n",s1);
   
    return 0;
}