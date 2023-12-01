// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int ra,ca,rb,cb,i,j,k;
  int a[10][10],b[10][10],c[10][10];
  
  printf("Enter Row of matrix a:ra:");
  scanf("%d",&ra);
  printf("Enter Column of matrix a: ca: ");
  scanf("%d",&ca);
  printf("Enter Row of matrix b: rb: ");
  scanf("%d",&rb);
  printf("Enter Column of matrix b: cb:");
  scanf("%d",&cb);
  
  if(ca==rb){
      for(i=0;i<ra;i++){
          for(j=0;j<ca;j++){
              printf("a[%d][%d] :",i,j);
              scanf("%d",&a[i][j]);
          }
      }
      
      for(i=0;i<rb;i++){
          for(j=0;j<cb;j++){
              printf("b[%d][%d] :",i,j);
              scanf("%d",&b[i][j]);
          }
      }
      for ( i=0;i<ra;i++){
          for(j=0;j<ca;j++){
              
              c[i][j] = 0;
              
              for(k=0;k<cb;k++){
                  c[i][j] += a[i][k] * b[k][j];
              }
          }
      }
      
     for(i=0;i<ra;i++){
         for(j=0;j<cb;j++){
             
             printf("%d\t", c[i][j]);
         }
        printf("\n");

     }

     }else{
        printf("Matrix order can't be multiply");
     }
     return 0;
}
    
