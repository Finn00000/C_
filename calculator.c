
#include <stdio.h>



int main()
{

   char operator;
   float num1;
   float num2;
   float result;


   printf("Choosing Your Operator + - * / : ");
   scanf("%c" ,&operator);

   if(operator == '+'){
    printf("Please Enter Num 1 : ");
    scanf("%f" , &num1);
    printf("Please Enter Num 2 : ");
    scanf("%f" , &num2);
    result = num1 + num2;
    printf("here is the result %.1f : " ,result);
   }
   else if(operator == '-'){
    printf("Please Enter Num 1 : ");
    scanf("%f" ,&num1);
    printf("Please Enter Num 2 : ");
    scanf("%f" ,&num2);
    result = num1 - num2;
    printf("The result is %.1f" ,result);
   }
   else if(operator == '*'){
    printf("Please Enter Num 1 : ");
    scanf("%f" ,&num1);
    printf("Please Enter Num 2 : ");
    scanf("%f" ,&num2);
    result = num1 * num2;
    printf("The result is %.1f" ,result);
   }
   else if(operator == '/'){
    printf("Please Enter Num 1 : ");
    scanf("%f" ,&num1);
    printf("Please Enter Num 2 : ");
    scanf("%f" ,&num2);
    result = num1 / num2;
    printf("The result is %.2f" ,result);
   }
   else{
    printf("%c is not invalid" ,operator);
   }
return 0;
}



