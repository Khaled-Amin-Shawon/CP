#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int array[num], array1[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int x = 0; x < num; x++)
    {
        for (int i = 0; i < num; i++)
        {
            if (array[i]==(x+1))
            {
                array1[x]=i+1;
            }
        }
    }
    for (int i = 0; i < num; i++)
    {
        printf("%d ",array1[i]);
    }
}