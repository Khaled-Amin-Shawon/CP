#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    string s;
    cin>>s;
    ll n =s[0]-'0';
    ll m=s[2]-'0';
    cout<<n*m;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


    ll test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
