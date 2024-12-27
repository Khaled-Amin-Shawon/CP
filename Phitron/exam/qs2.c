#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d", &a);
    int max = a, min = a;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &b);
        if (max < b)
            max = b;
        if (min > b)
            min = b;
    }
    printf("Largest = %d\nSmallest = %d", max, min);
    
    // scanf("%d%d%d%d", &a, &b, &c, &d);
    // if (a < b && a < c && a < d)
    // {
    //     printf("Largest = %d",a);
    // }

    return 0;
}