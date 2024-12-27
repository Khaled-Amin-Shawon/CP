#include<stdio.h>
int fibbonacciSeries(int n)
{
    if (n == 1 || n == 2)
    {
        return n;
    }
    else
    {
        return fibbonacciSeries(n - 2) + fibbonacciSeries(n - 1);
    }
}
int main() // recursive method, delayed output
{
    int p;
    printf("enter number of terms to be printed\n");
    scanf("%d", &p);
    printf("%d", fibbonacciSeries(p));
    return 0;
}

