#include<stdio.h>
int Bit(int num)
{
   int count=2;
   while (num)
   {
     count++;
     num >>=2;
   }
   return(count);
}
int main()
{
    int a;
    scanf("%d",&a);
    int result=Bit(a);
    printf("%d",result);
}