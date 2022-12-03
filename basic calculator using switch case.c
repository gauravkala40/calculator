#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num1,num2,num3,action;

  printf("please enter your number : ");
  scanf("%d",&num1);
  printf("please enter your number : ");
  scanf("%d",&num2);

  printf("\nfor + enter 1 \nfor - enter 2 \nfor / enter 3 \nfor * enter 4 \n");
  scanf("\n%d",&action);

  switch(action){
  case 1:
       num3 = num1 + num2;
      printf("%d + %d = %d",num1,num2,num3);
      break;
  case 2:
        num3 = num1 - num2;
        printf("%d - %d = %d",num1,num2,num3);
        break;
  case 3:

         num3 = num1  % num2;
         printf("%d / %d = %d",num1,num2,num3);
         break;
  case 4:
         num3  = num1 * num2;
         printf("%d * %d = %d",num1,num2,num3);
         break;
  default:
        printf("wrong input");


  }

  printf("\n\nTHANKYOU FOR USING\nRUN AGAIN FOR NEW VALUES");


return 0;

}
