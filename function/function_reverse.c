#include <stdio.h>
//void reversegara ()
int reversegara(int num){
    int  revnum=0, originnum, lastnum=0;
    //printf("Enter a number to get its reverse:");
    //scanf("%d",&num);
    
    //originnum = num;
    while(num>0){
        lastnum = num%10;
        revnum = revnum *10 + lastnum;
        num = num/10;
    }
    //printf("Reverse of %d is %d", originnum, revnum);
    return revnum;
}
int main() {
    //int number;
    //reversegara();
    int number,reverse_number;
    
    //reverse_number = reversegara();
    
   printf("Enter a number to get its reverse:");
    scanf("%d",&number);
    
     reverse_number = reversegara(number);
    
    printf("Reverse = %d", reverse_number);
    
    return 0;
}