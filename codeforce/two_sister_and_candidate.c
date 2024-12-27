#include<stdio.h>
int main()
{
    long long int test;
    scanf("%lld",&test);

    for (int i = 0; i < test; i++)
    {
        long long int n;
        scanf("%lld",&n);
        long long int result;
        if (n==1 || n==2)
        {
            result=0;
        }
        else
        {
            if (n%2==0)
            {
                result=n/2-1;
            }
            else
            {
                result=n/2;
            }
            
           
        }
        printf("%lld\n",result);
    }
}