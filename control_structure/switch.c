
#include<stdio.h>

int main(){

    int choose;

    printf("Enter choice number");
    scanf("%d",&choose);

    switch(choose){

        case 1:
        printf("Sunday\n");
        break;

        case 2:
        printf("Monday\n");
        break;

        case 3:
        printf("Tuesday\n");
        break;

        case 4:
        printf("Wednesday\n");
        break;

        case 5:
        printf("Thusday\n");
        break;

        case 6:
        printf("Friday\n");
        break;

        case 7:
        printf("Saturday\n");
        break;

        default:
        printf("Invalid");
        break;
    }

    return 0;
    }
