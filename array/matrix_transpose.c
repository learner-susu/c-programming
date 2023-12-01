#include<stdio.h>
int main(){
    int mr,mc,i,j;
    int M[10][10],T[10][10];

    printf("Enter Row of matrix mr:");
    scanf("%d",&mr);
    printf("Enter Column of matrix mc:");
    scanf("%d",&mc);

    for(i=0;i<mr;i++){
        for(j=0;j<mc;j++){
            printf("M[%d][%d]",i,j);
            scanf("%d",&M[i][j]);
        }
    }

    for(i=0;i<mr;i++){
        for(j=0;j<mc;j++){

            T[j][i] = M[i][j];
        }
    }

    for(i=0;i<mc;i++){
        for(j=0;j<mr;j++){

            printf("%d\t",T[i][j]);
        }
        printf("\n");
    }
return 0;
}