#include <stdio.h>
int main()
{
    for(int i=10;i>=-5;i--)
    {
        printf("%d",i);
        if(i)
        {
            printf(" ok \n");
        }
    }
    return 0;
}