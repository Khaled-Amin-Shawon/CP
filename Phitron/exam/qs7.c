#include <stdio.h>
int main()
{
    int a, b, n;
    scanf("%d%d", &a, &b);
    if (a < b)
        n = a;
    else
        n = b;
    while (n > 0)
    {
        if (a % n == 0 && b % n == 0)
        {
            printf("The GCD of %d and %d is %d.", a, b, n);
            break;
        }
        n--;
    }
}