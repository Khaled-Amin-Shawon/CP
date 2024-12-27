#include<stdio.h>
#include<conio.h>
int main()
{
    int b;
    printf("program start\n");
    do
    {
      printf("Enter the number 1/0 :");
      scanf("%d",&b);
      if (b==0 || b==1)
      {
        printf("you input %d",b);
        break;
      }
      else
      {
        printf("you input is wrong.. try again\n");
      }
    } while (5);
    getch();
}