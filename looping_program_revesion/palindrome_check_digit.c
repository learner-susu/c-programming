# include<stdio.h>
int main(){

    int number, last_number, reverse_number = 0, suruko_number=0;

    printf("Enter number :\n");
    scanf("%d",&number);

    suruko_number = number;

    while(number != 0){
        last_number = number %10;
        reverse_number = reverse_number * 10 + last_number;
        number = number/10;
    }

    if(suruko_number == reverse_number){
        printf("This is Palindrome number %d", reverse_number);
    }else{
        printf("This is Not Palindrome number %d", reverse_number);
    }

    return 0;
}