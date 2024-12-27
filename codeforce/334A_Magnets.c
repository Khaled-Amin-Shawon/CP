#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    int magnet[number];
    for (int i = 0; i < number; i++)
    {
        scanf("%d",&magnet[i]);
    }
    int k=magnet[0],result=1;
    for (int i = 0; i < number; i++)
    {
    
        if (k!=magnet[i])
        {
            result++;
            k=magnet[i];
        }
        
    }
    printf("%d",result);
    
    return 0;
}
