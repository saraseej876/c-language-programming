#include <stdio.h>
 
int main (){

   // local variable definition
   int a = 10, b = 5;
   
   // Run the program with other values 2, 3, 4, 5
   int op = 1; 
   float result;
  
   printf("1: addition\n");
   printf("2: subtraction\n");
   printf("3: multiplication\n");
   printf("4: division\n");
   
   printf("\na: %d b: %d : op: %d\n", a, b, op);
   switch (op){
      case 1:
         result = a + b;
         break;
      case 2:
         result = a - b;
         break;
      case 3:
         result = a * b;
         break;
      case 4:
         result = a / b;
         break;
      default:
         printf("Invalid operation\n");
   }
   if (op >= 1 && op <= 4)
      printf("Result: %6.2f", result);
   
   return 0;
}