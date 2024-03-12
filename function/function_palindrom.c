#include <stdio.h>

//void palindrom(int b)
int palindrom(num){
    int  ornum=0, revnum=0, lastnum=0;
    
    //printf("Enter number");
    //scanf("%d",&num);
    
    ornum = num;
    
    while(num>0){
        lastnum = num%10;
        revnum = revnum * 10 + lastnum;
        num= num/10;
    }
    if(revnum == ornum){
        printf("%d is palindrom number",ornum);
    }else{
        printf("%d is not palindrom number", ornum);
    }
    return revnum;
}

int main(){
    int number,rev;
    
    printf("Enter number");
    scanf("%d",&number);
    
     rev= palindrom(number);
     
     printf("Palindrom number is %d",rev);

    return 0;
}