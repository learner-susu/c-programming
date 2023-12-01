

// Online C compiler to run C program online
#include <stdio.h>

int main() {
   // defining variable to store matrix size
   int Ra, Ca, Rb, Cb, i, j;
   
   // defining matrices
   int a[10][10],b[10][10],c[10][10];
   
   // Reading matrix sizes
   printf("Enter row of matrix a:");
   scanf("%d",&Ra);
   printf("Enter Column of matrix a:");
   scanf("%d",&Ca);
   
   printf("Enter row of matrix b:");
   scanf("%d",&Rb);
   printf("Enter Column of matrix b:");
   scanf("%d",&Cb);
   
   // checking condition for addition
   if(Ra == Rb && Ca == Cb){
       // Matrices are of same size, so proceeding with addition
       // We will do 4 things here:
       /* 
       1. Reading matrix a
       2. Reading matrix b
       3. Adding, and storing in matrix c
       4. Displaying matrix c
       
       */
       
       // Doing 1. Reading matrix a
       printf("Please enter following elements of matrix a:\n");
       for(i=0;i<Ra;i++){
           for(j=0;j<Ca;j++){
               printf("a[%d][%d]=",i,j);
               scanf("%d",&a[i][j]);
           }
       }
       
       // Doing 2. Reading matrix b
       printf("Please enter following elements of matrix b:\n");
       for(i=0;i<Rb;i++){
           for(j=0;j<Cb;j++){
               printf("b[%d][%d]=",i,j);
               scanf("%d",&b[i][j]);
           }
       }
       
       // Doing 3. Adding a and b, storing result in c 
       printf("Adding matrix a and matrix b:\n");
       for(i=0;i<Ra;i++){
           for(j=0;j<Ca;j++){
               c[i][j] = a[i][j]+b[i][j];
           }
       }
       
       
       // Doing 4. display matrix c
       printf("matrix a + matrix b = matrix c:\n");
       for(i=0;i<Ra;i++){
           for(j=0;j<Ca;j++){
               printf("%d\t",a[i][j]);
           }
           printf("\n");
       }
       
       printf("\t+\n");
       
        for(i=0;i<Ra;i++){
           for(j=0;j<Ca;j++){
               printf("%d\t",b[i][j]);
           }
           printf("\n");
       }
       
       printf("\t=\n");
       
        for(i=0;i<Ra;i++){
           for(j=0;j<Ca;j++){
               printf("%d\t",c[i][j]);
           }
           printf("\n");
       }
       
       
   }else {
       // Matrices are of different size, so can't be added.
       printf("Matrices a and b are of different order. So, can't be added.\n\nTry Again!!!");
   }
    return 0;
}