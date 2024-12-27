#include <bits/stdc++.h>
using namespace std;
double root(double x)
{
   return x * x * x - 2 * x - 5;
}
int main()
{
   cout << "BISECTION METHOD \n";
   double a, b, r;
   a = 2;
   b = 3;

   while ((b - a) >= 0.0001)
   {
      r = (a + b) / 2;
      printf("A=%0.4lf B=%0.4lf root=%0.4lf\n", a, b, r);
      if (root(r) > 0)
      {
         b = r;
      }
      else
         a = r;
   }
   printf("\n\nThe root is %0.4lf \n", r);
}