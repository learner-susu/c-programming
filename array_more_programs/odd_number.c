# include<stdio.h>
int main(){
    // printing the value of odd number less than 50//
    int count,i;
    for(i=1; i<=50; i++){
        if(i %2 != 0){
            printf("%d\n",i);
        }
    }
    printf("Count number is %d",count);
    
    return 0;
}
