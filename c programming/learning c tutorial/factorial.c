#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    double fact=1;
    printf("Enter the number \n");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
      fact=fact*i;
    }
    printf("the value of %d! is %lf\n",num,fact);
    getch();
}