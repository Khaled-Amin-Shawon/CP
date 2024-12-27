#include<stdio.h>
int giveArray(int n, int m[])
{ 
     int mim;
    for (int i = 0; i < n; i++)
    {
        for ( int j = i; j< n; j++)
        {
            if (mim>m[j])
            {
                mim=m[j];
            }
        }
        
    }
   
    return mim;

}
int main()
{
    int n,m;
    scanf("%d",&n);
    int array[n];
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        int max=array[i];
        for (int j = i; j < 5; j++)
        {
            if (max<array[j])
            {
                max=array[j];
                array[j]=array[i];
            }
            array[i]=max;
        }
       
    }
    int count=0;
   int min=giveArray(n,array);
   for (int i = 0; i < n; i++)
   {
    
        for (int j = 0; j < n; j++)
        {
            if (array[i]==array[j] && i==j)
            {
                count++;
                if (count>1)
                {
                    array[j] = m;
                }
                int m=array[j];
                
            }
            
        }
        printf("%d ",array[i]);
        
   }
   
    


    
}