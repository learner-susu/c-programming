#include <stdio.h>

int main() {
    int  a[2][3],sum=0, i, j;
    
    printf("Enter matrix element :\n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("Sum of matrix element are:\n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            sum = sum + a[i][j];
        }
    }
         printf("Sum element is %d\n", sum);
    
    return 0;
}