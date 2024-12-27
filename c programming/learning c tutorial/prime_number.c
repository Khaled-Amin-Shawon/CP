#include<stdio.h>
#include<conio.h>
int main()
{
    printf("Check prime number\n");
    int m ,p;
    printf("Enter the number :");
    scanf("%d",&m);
    for (int i = 2; i < m; i++)
    {
        if (m%i==0)
        {
          p=1;
          break;
        }
    }
    if (p==1)
    {
        printf("%d is not prime number ",m);
    }
    else
    {
        printf("%d is prime number ",m);
    }
    
    getch();
}