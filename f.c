#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int tmp;
    for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
        for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[j] <a[i])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    int b_count=0,c_count=0;
    for(int i=0;i<n;i++)
    {
         if(a[i]%2==0)
            {
             b_count++;
            }
            if(a[i]%2!=0)
            {
             c_count++;
            }
    }
   int b[b_count];
    int c[c_count];
    int maxo=0,maxe=0;
    int x,y;
    for(int i=0;i<n;i++)
        {
           if(a[i]%2==0)
            {
                b[i]=a[i];
                if(maxe<=b[i])
                {
                    maxe=b[i];
                    x=i;
                }
            }
            if(a[i]%2!=0)
            {
                c[i]=a[i];
                if(maxo<=c[i])
                {
                    maxo=c[i];
                    y=i;
                }
            }
        }
        int max_even=maxe+b[x-1];
        int max_odd=maxo+c[y-1];
        //printf("%d\n",max_even);
        //printf("%d\n",max_odd);
        if(max_odd%2==0)
        {
        if(max_even>max_odd)
        {
            printf("%d\n",max_even);
        }
        else
            {
            printf("%d\n",max_odd);
            }
        }
        else
        {
            printf("%d\n",max_even);
        }

}