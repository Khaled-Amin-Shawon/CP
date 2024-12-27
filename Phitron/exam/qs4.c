#include <stdio.h>
int main()
{
    long long int num;
    scanf("%lld", &num);
    long long int sum = 0;
    while (num != 0)
    {
        sum += (num % 10);
        num /= 10;
    }
    printf("%lld", sum);
}