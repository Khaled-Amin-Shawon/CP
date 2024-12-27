#include<stdio.h>
#include<conio.h>
int main()
{
    long long int n,m,max,mim,mul=1;
    printf("enter the value of number m and n");
    scanf("%lld%lld",&m,&n );
    max=(n>m)? n:m;
    mim=(n<m)? n:m;
    for (  mim; mim <= max ; mim++)
    {
        if (mim%2!=0)
        {
           mul=mul*mim;
        }
    }  
    printf("%lld",mul);
    getch(); 
}
 