#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    int array[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int step = 0; step < num; step++)
    {
        int max = array[step], pos = step;
        for (int i = step; i < num; i++)
        {
            if (max < array[i])
            {
                max = array[i];
                pos = i;
            }
        }
        int temp = array[step];
        array[step] = array[pos];
        array[pos] = temp;
    }
//    Big Khaled is 
    
    int sum=0;
    for (int i = 0; i < num; i++)
    {
        int remSum=0;
        sum+=array[i];
        for (int j = i+1; j < num; j++)
        {
            remSum+=array[j];
        }
       
        if (sum > remSum)
        {
            printf("%d",i+1);
            break;
        }
    }
}