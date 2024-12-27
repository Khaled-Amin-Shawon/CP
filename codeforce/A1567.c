#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int  i = 0; i < t; i++)
    {
        int num;
        scanf("%d",&num);
        char str[num];
        scanf("%s",str);
       for (int j = 0; j < num; j++)
       {
           if (str[j]=='D')
           {
               str[j]='U';
           }
           else if (str[j]=='U')
           {
               str[j]='D';
           }
       }
       puts(str);
    }
    
}