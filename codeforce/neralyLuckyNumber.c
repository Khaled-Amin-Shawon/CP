#include<stdio.h>

int main()
{
    int number,rem,count=0;
    scanf("%d",&number);
    while (number>0)
    {
        rem=number%10;
        number/=10;
        
        if (rem==4)
        {
            count++;
            printf("%d %d",rem,count);
        }
        if (rem==7)
        {
            count++;
            printf("%d %d",rem,count);
        }
        
    }
    if (count==7 || count==4)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    
}