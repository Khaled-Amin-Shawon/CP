#include<stdio.h>
int main()
{
    long long int m,n,a;
    scanf("%lld%lld%lld",&m,&n,&a);
    long long int ma=m/a;
    if (m%a!=0)
    {
        ma++;
    }
    long long int na=n/a;
    if (n%a!=0)
    {
        na++;
    }
    long long int res=ma*na;
    printf("%lld",res);    
}