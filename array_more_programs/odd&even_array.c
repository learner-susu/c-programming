#include <stdio.h>

int main() {
    int a[10], i;
    int even=0, odd=0;
    
    printf("Enter array number :\n");
    
    for(i=0; i<10; i++){
       scanf("%d",&a[i]);
    
    //for(i=0; i<10; i++){
        if(a[i]%2 == 0){
            even = even+1;
        }else{
            odd = odd +1;
        }
    
    }
    
        printf("Even number is total are : %d\n", even);
        printf("Odd number is  total are :%d\n",odd);

    return 0;
}