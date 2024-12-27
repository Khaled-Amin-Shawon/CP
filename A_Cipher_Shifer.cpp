#include <bits/stdc++.h>
using namespace std;
int find_s(string s, int a)
{
    for (int i = a+1; i < s.size(); i++)
    {
        if (s[a]==s[i])
        {
            return i;
        }
        
    }
    return s.size();
}
void solve()
{
    int l;
    cin >> l;
    string s;
    cin >> s;
    char temp = s[0];
    int i=0;
   while (i<s.size())
   {
       i=find_s(s,i);
        cout<<s[i];
        i++;
   }
   
    cout<<endl;
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}