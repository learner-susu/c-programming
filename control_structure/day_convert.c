#include<stdio.h>

int main(){

    int days,y,m,d,rd;

    printf("Enter days");
    scanf("%d",&days);

    y = days/365;
    rd = days%365;
    m = rd/30;
    d = rd%30;

    printf("year=%d month =%d days=%d",y,m,d);

    return 0;
}