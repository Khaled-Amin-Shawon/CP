#include<stdio.h>
#include<conio.h>
int main()
{
    int n,m,mul=1;
    int count=0;
    float ave;
    printf("enter the value of number m and n");
    scanf("%d%d",&m,&n );
   if (m<n)
   {
        for ( m; m <=n; m++)
    {
        if (m%2!=0)
        {

            mul=mul+m;
            printf("%d\n",m);
            count=count+1;
            
        }
       
    }
   }
   else if (n<m)
   {
        for ( n; n <=m; n++)
    {
        if (n%2!=0)
        {

            mul=mul+n;
            printf("%d\n",n);
            count=count+1;
            
        }
       
    }
   }
   
   
    ave=(float) mul/(float)count;
    printf("%f\n",ave);
    printf("%d",count);
   getch(); 
}