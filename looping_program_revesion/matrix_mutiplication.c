#include <stdio.h>

int main() {
   int a[3][3],b[3][3],c[3][3],i,j,k, ra,ca,rb,cb;

    printf("Enter rows and column for first matrix : \n");
    scanf("%d %d",&ra,&ca);
   
   printf("Enter matrix a :\n");
   for(i=0; i<ra;i++){
       for(j=0;j<ca;j++){
          printf("a[%d][%d]", i,j);
          scanf("%d",&a[i][j]);
       }
   }
   
   printf("Enter rows and column for second matrix :\n");
   scanf("%d %d",&rb,&cb);
   printf("Enter matrix b :\n");

  for(i=0; i<rb;i++){
      for(j=0;j<cb;j++){
          printf("b[%d][%d]",i,j);
          scanf("%d",&b[i][j]);
      }
  }
  printf("First matrix is :\n");

  for(i=0; i<ra;i++){
    for(j=0;j<ca;j++){
    
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
     printf("Second matrix is :\n");

 for(i=0; i<rb;i++){
       for(j=0;j<cb;j++){
        
         printf("%d\t",b[i][j]);
       }
       printf("\n");
   }

   if(ca == rb){
     for(i=0;i<ra;i++){
       for(j=0;j<cb;j++){
           c[i][j] = 0;
      
      for(k=0;k<cb;k++){
          c[i][j] = c[i][j] +  a[i][k] * b[k][j];
      }
       }
     }
   }
   
     printf("Printing result of matrix : \n");

   for(i=0; i<ra;i++){
       for(j=0;j<cb;j++){
           printf("%d\t",c[i][j]);
       }
       printf("\n");
   }
   

    return 0;
}