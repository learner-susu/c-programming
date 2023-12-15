 #include<stdio.h>

 int main(){

    int n,i,g=0,x[1000];

    printf("Enter any number");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);

        if(g<x[i])
        {
            g=x[i];
        }
    }

    printf("Greast number is %d",g);

    return 0;
 }