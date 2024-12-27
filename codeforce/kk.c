#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d",&a);
   int array[a];
   float k=0;
   for (int  i = 0; i <a; i++)
   {
      scanf("%d",&array[i]);
   }
   for (int i = 0; i < a; i++)
   {
    // printf("%d",array[i]);
    int l=array[i];
    k+=1/(float)l;
   }
   float u=1/k;
   printf("%f",u);
   

}