#include <stdio.h>

int main() {
   int a[3][3], i, j, sum_of_row,sum_of_column;
   
   printf("Enter matrix number :");
   
   for(i=0;i<3;i++){
       for(j=0;j<3;j++){
           scanf("%d",&a[i][j]);
       }
   }
   for(i=0;i<3;i++){
       for(j=0;j<3;j++){
           printf("%d\t",a[i][j]);
       }
       printf("\n");
   }
   
   printf("Sum of Individuals Row & Column Matrix are:\n");
  for(i=0;i<3;i++){
      sum_of_row = sum_of_column=0;
      for(j=0;j<3;j++){
          sum_of_row=sum_of_row+a[i][j];
          sum_of_column=sum_of_column+a[j][i];
      }
      printf("Sum of Row=%d, Sum of Column=%d\n", sum_of_row,sum_of_column);
  }
    return 0;
}