#include<stdio.h>
#include<conio.h>

int main()
{   
    double a,b;

    printf("Enter the value of a :\n ");
    scanf("%lf",&a);
     printf("Enter the value of b :\n ");
    scanf("%lf",&b);
    printf("the addition is %0.2lf\n", a+b);
    printf("the subtraction is %0.2lf\n", a-b);
    printf("the multipliication is %0.2lf\n", a*b);
    printf("the division is %0.2lf\n",a/b);
    // int  x=(int)a,y=(int)a;
    // int x,y;
    // x=(int)a;
    // y=(int)a;
    printf("The remainder is %d\n",(int)a%(int)b);
    getch();
}