#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ll a,b;
    cin>>a>>b;
    int c=0;
    while (a<=b)
    {
       a*=2;
       c++;

    }
    
    cout<<c<<endl;
}

