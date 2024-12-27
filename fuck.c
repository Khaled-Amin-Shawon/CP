#include <stdio.h>
int main()
{
    int *a;
    int array[5]={5, 5 ,6 ,6 ,8};
    a=array;
    for (int i = 0; i < 5; i++)
    {
        printf("X[%d] = %d \n",i+1,*(a+i));
    }
    
    
}