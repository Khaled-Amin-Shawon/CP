#include<stdio.h>
int fact_fast(int a);
int fact_second(int a, int b);
int fact_all(int a);



int main()
{
    int n;
    scanf("%d",&n);
    int a,b;
    scanf("%d %d",&a,&b);
    int x=fact_fast(n);
    printf("%d\n",x);
    int y= fact_second(a,b);
    printf("%d",y);

}




int fact_fast(int a)
{
    int x= fact_all(a);
    return x;
}

int fact_second(int a, int b)
{
    int x=fact_all(a);
    int y=fact_all(b);
    return x/y;
}



int fact_all(int a)
{
        int fact =1;

      for(int i=0;i<a;i++)
    {
      fact=fact*i+fact;
    }
        return fact;

}