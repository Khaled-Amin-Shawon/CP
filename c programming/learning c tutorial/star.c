#include<stdio.h>
#include<conio.h>
int main()
{
    int a,m;
   printf("Enter the number of line  ");
   scanf("%d",&a);
   m=a;
   for(int i=1;i<=a;i++)
   {
       for(int j=1;j<=m-1;j++)
       {
           printf(" ");
       }
       for(int k=1;k<=i;k++)
       {
           printf("* ");
       }
       m--;
       printf("\n");
    }
    getch();
}
    