#include<stdio.h>
#include<conio.h>

int main()
{
    int m,n,sum=0;
    printf("Randomly Enter value of any two number");
    scanf("%d%d",&m,&n);
     if (n<m)
    {
        for ( n; n<=m; n++)
        {
           sum +=n;
                
        }
    }
    else if (m<n)
    {
        for ( m; m<=n; m++)
        {
          sum +=m;
        }
    }
    printf("sum is %d",sum);
    getch();
}