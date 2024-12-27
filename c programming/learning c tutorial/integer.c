#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the numer : ");
    scanf("%d",&a);
    if (a>0)
    {
        printf(" the number is positive integer");
    }
    else if (a==0)
    {
        printf(" the number is zero");
    }
    else
    {
        printf(" the number is negetive integer");
    }
    getch();
}