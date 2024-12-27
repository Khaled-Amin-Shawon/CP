#include<stdio.h>
int main()
{
    long long int testCase;
    scanf("%lld",&testCase);
    for (int i = 0; i < testCase; i++)
    {
        long long int path,minute;
        scanf("%lld",&path);
        if (path%3==0)
        {
            minute=path/3;
        }
        else if (path==1)
        {
            minute=2;
        }
        else if (path==2)
        {
            minute=1;
        }
        else
        {
            minute=(path/3)+1;
        }
        printf("%lld\n",minute);
        
    }
    
}