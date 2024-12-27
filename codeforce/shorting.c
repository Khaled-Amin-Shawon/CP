#include <stdio.h>

int main()
{
    int array[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int step = 0; step < 5; step++)
    {
        int min = array[step], pos = step;
        for (int i = step; i < 5; i++)
        {
            if (min > array[i])
            {
                min = array[i];
                pos = i;
            }
        }
        int temp = array[step];
        array[step] = array[pos];
        array[pos] = temp;

        for (int i = 0; i < 5; i++)
        {
            printf("%d ", array[i]);
        }
        printf("\n");
    }
    printf("Final result:");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }
}