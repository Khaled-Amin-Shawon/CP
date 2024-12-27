#include<stdio.h>
#include<conio.h>
int main()
{
    int a,feet,inche;
    printf("Enter the value of inche :");
    scanf("%d",&a);
    feet=a/12;
    inche=a%12;
    printf("Your height is %d feet %d inches",feet,inche);
    getch();
}