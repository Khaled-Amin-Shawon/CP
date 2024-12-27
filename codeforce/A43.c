#include <stdio.h>
#include <string.h>
int main()
{
    int n, g1 = 0, g2 = 0;
    scanf("%d", &n);
    char t1[11], t2[11], t[11];
    scanf("%s", t1);
    g1++;
    for (int i = 1; i < n; i++)
    {
        scanf("%s", t);
        int k = strcmp(t, t1);
        if (k == 0)
        {
            g1++;
        }
        else
        {
            strcpy(t2, t);
            g2++;
        }
    }
    if (g1 > g2)
    {
        puts(t1);
    }
    else
    {
        puts(t2);
    }
}