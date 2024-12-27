#include<stdio.h>

int main()
{
    int a,b,sum;
    printf("Enter the number \n ");
    scanf("%d %d",&a,&b);
    printf("the number %d and %d \n", a,b);
    sum = a+b;
    printf("the sum is %d",sum);
    // printf("the sum of two number is %d",(a+b));
    return 0;
}