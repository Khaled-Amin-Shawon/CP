#include<stdio.h>
#include<conio.h>
int main() // iterative method,instant output
{
    int num1 = 0, num2 = 1, i = 0, finalTerm = 0, n;
    printf("enter number of terms to be printed\n");
    scanf("%d", &n);
    printf("fibbonacci series for %d term is \n", n);
    for (i = 0; i < n; i++)
    {
        printf("%d\t", finalTerm);
        finalTerm = finalTerm + num2;
        num2 = finalTerm;
    }
    getch();
}