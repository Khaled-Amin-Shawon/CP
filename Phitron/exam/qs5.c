#include<stdio.h>
 
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",num);
    while (num!=1)
    {
       if (num%2==0)
       {
           num/=2;
       }
       else
       {
            num--;
       }
       printf(",%d",num);
    }
}