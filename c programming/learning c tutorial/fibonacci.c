#include<stdio.h>
#include<conio.h>
int main()
{
    int a ,b=1, c=0,sum=0;
    printf("enter the number :");
    scanf("%d",&a);
    printf("%d\n",sum);
    for (int i = 0; i < a; i++)
    {
        sum = b+c;
        printf("%d\n",sum);
        b=c;
        c=sum;
    }
    getch();
}