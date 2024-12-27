#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    for ( int i = 1; i <= n; i++)
    {   
        if (i!=1)
        {
            printf("that ");
        }
        if (i%2!=0)
        {
            printf("I hate ");
        }
        else
        {
            printf("I love ");
        }
        
        if (i==n)
        {
            printf("it");
        }
        
        
    }
    
}