#include<stdio.h>
#define tol 0.0001
double fun(double x)
{

    double a=x*x*x-3*x-5;
    printf(" x--->%lf\n",a);
  return a;
}
void bisection(double a, double b)
{
    double x;
    int c=0;
   while ((b-a) >= tol)
    {
      x = (a+b)/2;
      if (fun(x) == 0.0) break;
      else if (fun(x)*fun(a) < 0) b=x;
      else a=x;
    printf("%d--a=%.4lf b=%.4lf x=%.4lf\n\n",c++,a,b,x);
   }
    printf("%d--a=%.4lf b=%.4lf x=%.4lf\n\n",c++,a,b,x);
    //printf("root = %.4lf\n",x);

}
int main()
{
    bisection(2,3);
}