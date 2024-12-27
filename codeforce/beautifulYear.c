#include<stdio.h>
int main()
{
    int num, array[4];
    scanf("%d",&num);
    for (int  i = num+1; i < 9050; i++)
    {
        int year=i;
        for ( int j = 0; j < 4; j++)
        {
            int b=year%10;
            array[j]=b;
            year/=10;
            // printf("%d ",array[j]);
        }
        if (array[0]!=array[1] && array[0]!=array[2] && array[0]!=array[3] && array[1]!=array[3] && array[1]!=array[2] && array[2]!=array[3])
        {
            printf("%d",i);
            break; 
        }
        
    }
 
    
}