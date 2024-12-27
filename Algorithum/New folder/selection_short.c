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
    int num;
    scanf("%d", &num);
    int array[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    selection_short(array, num);
    for (int i = 0; i < num; i++)
    {
        printf("%d ", array[i]);
    }
}