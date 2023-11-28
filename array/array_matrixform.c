// Online C compiler to run C program online
#include <stdio.h>

int main(){
    
    int matrix[3][4],i,j;
    
    // reading matrix elements
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("Enter element matrix[%d][%d]:",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    
    
    // printing matrix elements
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\nThank you!!\n");
    return 0;
}
