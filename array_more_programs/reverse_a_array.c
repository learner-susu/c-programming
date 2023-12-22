#include<stdio.h>

int main(){

    int n,i,a[20], b[20];

    printf("Enter size of array:");
    scanf("%d",&n);

    for (i=0;i<n;i++){
        printf("a[%d]",i);
        scanf("%d",&a[i]);

    }

    printf("*********Content of Array a:************\n\n");

    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

    // reversing and storing the reverse of array a in b

    for(i=0;i<n;i++){
        b[n-i-1] = a[i];
    }

    printf("\n\n****pritnting array b:*****\n\n");
    for(i=0;i<n;i++){
        printf("%d\t",b[i]);
    }
    

    return 0;
}