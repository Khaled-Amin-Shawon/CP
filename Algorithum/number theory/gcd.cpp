#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int gcd(int a, int b)
{

    int m = max(a, b);
    int n = min(a, b);
    if (n == 0)
    {
        return m;
    }
    else
    {
        gcd(n, m % n);
    }
}
 
int main()
{
    ll m,n;
    cin>>m>>n;
    ll k =gcd(m,n);
    cout<<k<<endl;
}