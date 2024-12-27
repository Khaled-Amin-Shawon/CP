#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 0; i <= 100; i++)
    {
        if (i % 6 == 0 && i % 4 != 0)
        {
            sum += i;
            printf("%d ", i);
        }
    }
    printf("\nsum is %d", sum);
}