#include<stdio.h>
int main()

{
    int a,b,c,k=0;
    int h;
    scanf("%d%d%d",&a,&b,&c);
    for (int  i = a; i <= b; i++)
    {
        if (i%c==0)
        {
            h=i; 
             k=1;
            break;
        }
       
    }
    if (k==1)
    {
        printf("%d",h);
    }
    if (k==0)
   
    {
        printf("-1");
    }
    
    
    
}