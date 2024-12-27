#include<bits/stdc++.h>
using namespace std;
double rt=0;
 double root( double x){
    return x*x*x-2*x-5;
 }
 int main()
 {
    cout<<"FALSEPOSITION METHOD \n";
    double a,b,r=0;
    a=2;b=3;

    while ((r-a)>=0.00001 || (b-r)>=0.00001)
    {
        r=((a*root(b)-b*root(a))/(root(b)-root(a)));
        printf("A=%lf B=%0.4lf root=%lf\n",a,b,r);
        if(abs(rt-r)<=0.00001) break;
        else if (root(r)>0)
        {
            b=r;
        }
        else a=r;
        rt=r;
        
    }
    printf("\n\nThe root is %0.4lf \n",r);
 }