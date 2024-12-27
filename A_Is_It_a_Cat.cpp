/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include<bits/stdc++.h>
#define ll                  long long 
#define no                  cout<<"NO"<<endl;
#define yes                 cout<<"YES"<<endl;
#define fr(i, n)            for(ll i = 0; i < n; i++)
#define fr1(i, n)           for(ll i = 1; i <= n; i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;
void solve()
{
   int n;  cin >> n;
        string s; cin >> s;
        for (int i=0; i<n; i++)
        {
            s[i]=tolower(s[i]);
        }
        string nw="";
        nw+=s[0];
        for (int i=1; i<n; i++)
        {
            if (s[i]!=s[i-1])
                nw+=s[i];
        }
 
        if (nw=="meow") cout << "YES" << endl;
        else cout << "NO" << endl; 
}
int main()
{
    fast;
    ll t=1;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}