#include<stdio.h> 


int BigKhaled(int n,int a[] )
{
    int count[6]={0};
    for (int i = 0; i < n; i++)
    {
        if (a[i]<10)
        {
           count[0]++; 
        }
        else if (a[i]<20)
        {
            count[1]++;
        }
        else if (a[i]<30)
        {
            count[2]++;
        }
        else if (a[i]<40)
        {
            count[3]++;
        }
        else if (a[i]<50)
        {
            count[4]++;
        }
        else if (a[i]>=50)
        {
            count[5]++;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d0 to %d9 is %d \n",i,i,count[i]);
    }
    

    
}




int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n ; i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for (int i = 1; i < n; i++)
    {
        if (max<a[i])
        {
            max=a[i];
        }
        
    }
    printf("max of array is %d\n",max);

    BigKhaled(n,a);
    
    
}