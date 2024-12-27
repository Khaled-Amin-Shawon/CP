
#include<stdio.h>
#include<conio.h>
int main()
{
    
    int a;
    printf("The number :");
    scanf("%d",&a);
    for (int i=1 ; i <=a ; i++)
    {
       if (i%4==0)
       {
            printf("%d\n",i);
       }
    }
    getch();
    
}