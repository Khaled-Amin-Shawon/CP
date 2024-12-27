#include<stdio.h>
int main()
{
    int room;
    scanf("%d",&room);
    int array1[room],array2[room];
    for (int  i = 0; i < room; i++)
    {
        scanf("%d%d",&array1[i],&array2[i]);
    }
    int result=0;
    for (int i = 0; i < room; i++)
    {
        if ((array2[i]-array1[i])>=2)
        {
            result++;
        }
        
    }
    printf("%d",result);

}