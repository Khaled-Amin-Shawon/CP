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

    int n, num = 0;
    string s;
    cin >> n >> s;
    stack<char> khaled;
    for (int i=0;i<n;i++)
    {
        if (!khaled.empty() && khaled.top() != s[i])
        {
            khaled.pop();
            num++;
        }
        else
        {
            khaled.push(s[i]);
        }
    }
    if (num % 2 == 0)
    {
        cout << "Ramos\n";
    }
    else
    {
        cout << "Zlatan\n";
    }
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
