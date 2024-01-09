#include <stdio.h>
#include <string.h>
int main() {
   int lenth,i;
   char name[30];
   
   printf("Enter your name :\n");
   scanf("%s",name);

   lenth = strlen(name);
   printf(" String length is %d ", lenth);
    return 0;
}