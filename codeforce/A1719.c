#include <stdio.h>
int main()
{
    int count;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        long long int n, m;
        scanf("%lld%lld", &n, &m);
        long long int sum = n + m;
        if (sum % 2 == 0)
        {
            printf("Tonya\n");
        }
        else
        {
            printf("Burenka\n");
        }
    }
}