#include<stdio.h>
#include<string.h>
int main()
{
    int num,n=0,z=0;
    scanf("%d",&num);
    char str[num];
    scanf("%s",str);
    for (int  i = 0; i <num; i++)
    {
        if (str[i]=='n')
        {
            n++;
        }
        else if (str[i]=='z')
        {
            z++;
        }
    }
    for (int i = 0; i <n; i++)
    {
        printf("1 ");
    }
    for (int  i = 0; i < z; i++)
    {
        printf("0 ");
    }
    
    
}