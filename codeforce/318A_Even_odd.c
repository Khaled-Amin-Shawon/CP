#include<stdio.h>
int main()
{
    long long int n,k;
    scanf("%lld%lld",&n,&k);
    if (n%2==0)
    {
        if (k>n/2)
        {
            k=k-n/2;
            printf("%lld",(k*2));
        }
        else{
            printf("%lld",(k*2-1));
        }  
    }  
    else
    {
        if (k>(n/2)+1)
        {
            k=k-n/2;
            printf("%lld",((k-1)*2));
        }
        else{
            printf("%lld",(k*2-1));
        }  
    }
    
}