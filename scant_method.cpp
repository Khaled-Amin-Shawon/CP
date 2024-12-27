/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         St id-->2102003           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;
#define dif 0.0001
double fun(double x)
{
    return x*x*x-5*x+1;
}
void secand_method(double x1,double x2){
    if(abs(x1-x2)<=dif) {
        printf("\n\nroot ~ %0.4lf \n",x2);
        return ;
    }
    double ans=(x1*fun(x2)-x2*fun(x1))/(fun(x2)-fun(x1));
    printf("fun(%0.4lf)==%0.4lf and fun(%0.4lf)==%0.4lf\t",x1,fun(x1),x2,fun(x2));
    printf("%0.4lf %0.4lf Ans = %0.4lf\n",x1,x2,ans);
    secand_method(x2,ans);
}
int main() {
    secand_method (0,1);

    return 0;
}
