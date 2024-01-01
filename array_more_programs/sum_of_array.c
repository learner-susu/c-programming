#include <stdio.h>

int main() {
    int a[5],b[5],c[5],i;
    
    printf("Enter first element of array:\n");
    for(i=0; i<5; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter second element of array:\n");
    for(i=0; i<5; i++){
        scanf("%d",&b[i]);
    }
    printf("Sum of array:\n");
    for(i=0; i<5; i++){
        c[i] = a[i] + b[i];
        printf("Sum of a and b array are %d is =%d\n", i,c[i]);
    }
    return 0;
}