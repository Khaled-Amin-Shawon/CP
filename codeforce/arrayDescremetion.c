#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int k = 0; k < t; k++)
    {
        int n;
        scanf("%d",&n);
        int a[n],b[n];
        for (int  i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }
        for (int i = 0; i <n; i++)
        {
            scanf("%d",&b[i]);
        }
        int h=a[0]-b[0];
        if (h<0)
        {
            h=h*(-1);
        }
        for (int i = 0; i < n; i++)
        {
            int g=a[i]-h;
            if (g<=0)
            {
                a[i]=0;
            }
            else{
                a[i]=g;
            }
            
        }
        
        int kb=0;
        for (int i = 0; i < n; i++)
        {
            if (a[i]==b[i])
            {
               kb++ ;
            }
            
        }
        if (kb>=n)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        
        
    }
    
}