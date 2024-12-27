#include <stdio.h>
int main()
{
    int a, b, n;
    scanf("%d%d", &a, &b);
    if (a > b)  n = a;
    else  n = b;
    while (n)
    {
        if (n % a == 0 && n % b == 0) {
            printf("The LCM of %d and %d is %d.", a, b, n);
            break;
        }
        n++;
    }
}