#include <stdio.h>
int main()
{
    long long int tast;
    scanf("%lld", &tast);
    for (long long int i = 0; i < tast; i++)
    {
        long long int a, b, r, mod;
        scanf("%lld%lld", &a, &b);
        mod = a % b;
        if (mod == 0)
        {
            r = 0;
        }
        else
        {
            r = b - mod;
        }
        printf("%lld\n", r);
    }
}