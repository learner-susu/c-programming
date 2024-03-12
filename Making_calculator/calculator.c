#include <stdio.h>
#include<stdlib.h>
#include<math.h>
 // Calculator Functions
  void addition(){
      int number1, number2;
      
      printf("Enter first number:\n");
      scanf("%d",&number1);
      printf("Enter second number:\n");
      scanf("%d",&number2);
      printf("%d + %d = %d\n", number1,number2, (number1+number2));
  }
  
  void subtraction(){
      int number1, number2;
      
      printf("Enter first number:\n");
      scanf("%d",&number1);
      printf("Enter second number:\n");
      scanf("%d",&number2);
      printf("%d - %d = %d\n", number1,number2, (number1-number2));
  }
  
  void multiplication(){
      int number1, number2;
      
      printf("Enter first number:\n");
      scanf("%d",&number1);
      printf("Enter second number:\n");
      scanf("%d",&number2);
      printf("%d * %d = %d\n", number1,number2, (number1*number2));
  }
  void division(){
      float number1, number2;
      
      printf("Enter first number:\n");
      scanf("%f",&number1);
      printf("Enter second number:\n");
      scanf("%f",&number2);
      printf("%f / %f = %f\n", number1,number2, (number1/number2));
  }
  
  void power(){
      int number1, number2, power =1;
      int i=1;
      printf("Enter first number:\n");
      scanf("%d",&number1);
      printf("Enter second number:\n");
      scanf("%d",&number2);
      // power function le kam ganena so, doing manually

      for(i=1; i<=number2;i++){
        power = power * number1;
      }
      printf("%d ^ %d = %d\n", number1,number2,power );
  }

int main() {
    int choice;
    //infinite while loop to print the menu till exit is select 
    while(1){
        //print menu
        
        
        printf("------Calculator------\n");
        
        printf("1) Addition\n");
        printf("2) Subtraction\n");
        printf("3) Multiplication\n");
        printf("4) Division\n");
        printf("5) Power\n");
        printf("6) Exit\n");
        
        
        // accept choice from usesr
        printf("Enter choice Number :\n");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
             addition();
             break;
             case 2:
             subtraction();
             break;
             case 3:
             multiplication();
             break;
             case 4:
             division();
             break;
             case 5:
             power();
             break;
             case 6:
             printf("Bye\n");
             exit(0);
             default:
              printf("Invalid Choice Selected");
        }
    }
    
    
    
    return 0;
}