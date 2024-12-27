#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while (n)
    {
        n >>=2;
        printf("\n%d",n);
    }
    
}