#include<stdio.h>
#include<conio.h>
int main()
{
    printf("\nValidity Check of Tringle\n");
    int a,b,c;
    printf("Enter first side  : "); 
    scanf("%d",&a);
    printf("Enter second side : ");
    scanf("%d",&b);
    printf("Enter third side  : ");
    scanf("%d",&c);
    if (a+b>=c && b+c>=a && c+a>=b)
    {
        printf("The Tringle is valid ");
    }
    else
    {
        printf("The Tringle is not valid ");
    }
    getch();
}