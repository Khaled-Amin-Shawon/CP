#include <iostream>
using namespace std;
int main()
{
    int cash;
    cin>>cash;
    int r100 =cash/100;
    cash=cash%100;
    int r20=cash/20;
    cash=cash%20;
    int r10=cash/10;
    cash=cash%10;
    int r5=cash/5;
    cash=cash%5;
    int r1=cash/1;
    int result=r100+r20+r10+r5+r1;  
    cout<<result<<endl;  
}