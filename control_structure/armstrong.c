#include<stdio.h>
// pow (4,2) quibe rakhna math.h use gareko// 
#include<math.h>

int main(){
// varibale name rakheko//
    int number,reverse_number,s=0,origin_number;

    // user sanga number mageko//
    printf("Enter any number");
    scanf("%d",&number);
    // user le type gareko number origin variable ma rakheko//
    origin_number=number ;

    while(number>0){
        reverse_number=number%10;
        s=s+reverse_number*reverse_number*reverse_number;
        number=number/10;

        //  program kati patak ghumne vanera logik build gareko//
    }

    if(origin_number == s){

        // yadi condition true xa vane yo type hunxa//

        printf("%d\n is armstrong number",origin_number);

    }else{

        // rw condition false xa vane yo type hunxa //

        printf("%d\n is not armstrong number",origin_number);

    }

    return 0;
}