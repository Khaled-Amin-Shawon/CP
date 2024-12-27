#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int n;
    scanf("%d", &n);
    int m=n;
  	for(int i=1; i<=n;i++)
    {
        if(m>0)
        {
        for(int j=n;j>=m;j--)
        {
          printf("%d ",j);
        }
        for(int k=1; k<=2*(m-1); k++)
        {
            printf("%d ",m);
        }
         for(int l=m+1;l<=n;l++)
        {
          printf("%d ",l);
        }
        m--;
        }
        printf("\n");
    }
    int b=2;
    for(int i=1;i<=n-1;i++)
    { 
        if( b<=n)
        for(int j=n; j>=b;j--)
        {
            printf("%d ",j);
        }
        for(int k=1; k<=2*(b-1);k++)
        {
            printf("%d ",b);
        }
        for(int  l=b+1;l<=n;l++)
        {
            printf("%d ",l);
        }
        b++;
        printf("\n");
    }
    return 0;
}