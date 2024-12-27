#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    } 
    int j=0;
    for (int i = n-1; i <=0; i--)
    {
        array[j]=array[i];
        j++;
    }
    
    
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
}