#include <stdio.h>
int main()
{
    int tast;
    scanf("%d", &tast);
    for (int i = 0; i < tast; i++)
    {
        int count;
        scanf("%d", &count);
        int a[count], b[count];
        for (int j = 0; j < count; j++)
        {
            scanf("%d", &a[i]);
        }
        for (int j = 0; j < count; j++)
        {
            scanf("%d", &b[i]);
        }
        int s = a[0] - b[0], result = 0;
        for (int = 0; j < count; j++)
        {
            if (a[j] >= b[j])
            {
                if (b[j] == (a[j] - s))
                {
                    result++;
                    printf("%d %d %d\n", a[j], b[j], s);
                }
                else if (b[j] == 0 && (a[j] - s) < 0)
                {
                    result++;
                    printf("%d %d %d\n", a[j], b[j], s);
                }
            }
        }
        if (result == count)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
}