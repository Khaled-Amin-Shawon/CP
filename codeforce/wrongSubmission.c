#include<stdio.h>
int main()
{
    int num,k;
    scanf("%d%d",&num,&k);
    for (int  i = 0; i < k; i++)
    {
        if (num%10!=0)
        {
            num-=1;
        }
        else if (num%10==0)
        {
            num/=10;
        }
        
        
    }
    printf("%d",num);
    
}