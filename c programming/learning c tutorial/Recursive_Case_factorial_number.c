#include <stdio.h>
int factorial(int number)
{
    if ( number==1 || number ==0)
    {
        return 1;
    }
    else
    {
        return number*factorial(number-1); // Recursion of function

    }
}
int main ()
{
    int num;
    printf("enter a number");
    scanf("%d", &num);
    printf ("\n the factorial if %d is %d", num ,factorial(num));
    return 0;
}