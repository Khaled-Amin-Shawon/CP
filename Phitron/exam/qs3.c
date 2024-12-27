#include <stdio.h>
int main()
{
    long long int num, count = 0;
    scanf("%lld", &num);
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    printf("%lld digits", count);
    return 0;
}