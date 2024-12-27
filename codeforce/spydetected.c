#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    for (int j = 0; j < number; j++)
    {
        int count ;
        scanf("%d",&count);
        int array[count];
        for (int  i = 0; i < count; i++)
        {
            scanf("%d",&array[i]);
        }
        for (int i = 0; i < count; i++)
        {
            int num=array[0];
            if (num!=array[1] && num!=array[2])
            {
                printf("1\n");
                break;
            }
           else if (num!=array[i])
            {
                printf("%d\n",i+1);
                break;
            }
            
        }
        
    }
    
}