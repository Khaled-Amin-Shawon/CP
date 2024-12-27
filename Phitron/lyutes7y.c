#include<stdio.h>
#define ll long long int
 
int main()
{
    int a;
    scanf("%d",&a);
    int array[a];

    for (int i = 1; i <=a; i++)
    {
        scanf("%d",&array[i]);
    }
     scanf("%d",&array[6]);
    for (int i = 1; i <=a; i++)
    {
        printf("%d ",array[i]);
    }
    printf("%d",array[6]);
    
    
    
}