#include<stdio.h>
#include<conio.h>
int main()
{
    long long int n;
    int a=0;
    printf("Enter the number ");
    scanf("%lld",&n);
    for (long long int i = 0; i < n; i++)
    {
        for (long long int j = 0; j < i; j++)
        {
            a=a+1;
            printf("%d ",a);
           
        }
        printf("\n");
    }
    // for (long long int i = n; i > 0; i--)
    // {
    //     for (long long int j = i; j > 0; j--)
    //     {
    //         printf("%lld ",i);
    //     }
    //     printf("\n");
    // }
    getch();
}