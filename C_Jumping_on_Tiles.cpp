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
   string s;
    cin >> s;
    map<char, vector<int>> pos;
    for (int i = 0; i < (int) s.size(); i++) {
        pos[s[i]].push_back(i);
    }
    char a = s[0], b = s.back();
    cout << abs(a - b) << " ";
    vector<int> ans;
    while (1) {
        for (auto i : pos[a]) {
            ans.push_back(i);
        }
        if (a < b) {
            a++;
        } else if (a > b) {
            a--;
        } else {
            break;
        }
    }
    cout << (int) ans.size() << '\n';
    for (auto i : ans) {
        cout << i + 1 << " ";
    }
    cout << '\n'; 
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