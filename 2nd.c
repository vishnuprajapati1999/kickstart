#include <stdio.h>
int eve_odd(num1)
{

    // True if the number is perfectly divisible by 2
    if(num1 % 2 == 0)
        return 0;
    else
    return 1;
}
int ten_div(num2)
{

    // True if the number is perfectly divisible by 10
    if(num2 % 10 == 0)
        return 0;
    else
    return 1;
}
int main()
{
    int number;//declartion of variables
    int choice;
    int check;
    int ten;




    while (1)  //infinite loop
    {
      printf("************Enter an integer: ");
      scanf("%d", &number);
      printf("      1.  +\n");
      printf("      2.  -\n");
      printf("      3.  exit\n");
      printf("*************choose your choice : ");
      scanf("%d",&choice);
      printf("\n\n");
      switch(choice){
        case 1 :
            {


            check=eve_odd(number); //check even or odd
            if (check==0) { //True
              ten=ten_div(number);
              if (ten==0) { //check divisible by 10
                number=number+2;
                printf("%d",number);
                  printf(" : 2 \n\n\n");
              }


             printf("%d",number);
                printf(" : 0 \n\n\n");
            }

              else if (check==1) {
              number=number+1;

             printf("%d",number);
               printf(" : 1 \n\n\n");
            }
            break;
          }
        case 2 :
        {


          check=eve_odd(number); //check even or odd
          if (check==0) { //for even numbers
            ten=ten_div(number);
            if (ten==0) { //check divisible by 10
              number=number+2;
              printf("%d",number);
                printf(" : 2 \n\n\n");
            }
           number=number-2;
           printf("%d",number);
             printf(" : 2 \n\n\n");
          }
          else if (check==1) { //for odd numbers
           number=number-1;
           printf("%d",number);
             printf(" : 1 \n\n\n");
          }
          break;
        }
        case 3 :
            exit(0); //exit function
            default :
              printf("Please choose right options \n\n\n");
      }
    }
}
