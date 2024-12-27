#include<stdio.h>
#include<conio.h>

long long int fact( long long int n)
{
    if (n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
   long long int n;
    printf("Enter the number\n");
    scanf("%lld",&n);
    for ( long long int i=1; i < n; i++)
    {
      printf("The factorial of %lld is %lld \n",i,fact(i));
    }
    


    getch();
}