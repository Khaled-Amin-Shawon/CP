#include <stdio.h>
int main()
{
    int n, m, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        sum += m;
    }
    int mod = sum % 4;
    sum = sum / 4;
    if (mod == 0)
    {
        printf("%d", sum);
    }
    else
    {
        printf("%d", sum + 1);
    }
}