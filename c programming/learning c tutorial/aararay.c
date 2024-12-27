#include<stdio.h>
int main()
{
    int array[10];
    for(int i=0;i<10;i++)
    {
    scanf("%d",&array[i]);
    }

    int neg=0,ps=0;
    for(int i=0;i<10;i++)
    {
        if(array[i]<0)   neg++;

        else ps++;
    }
    
    printf("Negetive number:%d times\nPositive number:%d times",neg,ps);

    return 0;
}



/*for(int i=0;i<10;i++)
    {
    printf("%d ",array[i]);
    }
int sum=array[1]+array[4];


printf("%d",sum)  */