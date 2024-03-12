#include <stdio.h>

int main() {
    int days,day,month,year,remainder_day;
    printf("Etner any days\n");
    scanf("%d",&days);
    
    year = days/365;
    remainder_day = days%365;
    month= remainder_day/30;
    day = remainder_day%30;
    
    printf("year = %d month = %d days = %d\n", year,month,day);

    return 0;
}