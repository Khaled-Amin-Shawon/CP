#include <stdio.h>
void selection_short(int a[], int n)
{
    int tamp, pos, j;
    for (int i = 0; i < n - 1; i++)
    {
        pos = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[pos] > a[j])
            {
                pos = j;
            }
        }
        if (pos != i)
        {
            tamp = a[i];
            a[i] = a[pos];
            a[pos] = tamp;
        }
    }
}
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int array[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &array[i]);
    }

    selection_short(array, m);

    int ans = array[n - 1] - array[0];
    for (int i = 0; i <= m - n; i++)
    {
        if (array[i + n - 1] - array[i] < ans)
        {
            ans = array[i + n - 1] - array[i];
        }
    }
    printf("%d",ans);
}