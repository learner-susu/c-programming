#include<stdio.h>

int main(){

    float n,av,s=0,x=0,c[1000];
    int i;
    printf("Enter any number");
    scanf("%f",&n);
    for(i=0;i<n;i++)
    {
        scanf("%f",&c[i]);
        s=s+c[i];
        if(c[i]<40)
        {
            x=x+1;
        }
    }
    av=s/n;
    printf("Average is : %f \n", av);
    printf("Total NO. of fail Students are : %f", x);

    return 0;
}