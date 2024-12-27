#include<bits/stdc++.h>

using namespace std;

bool vowelChecker( char a ){
    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U'){
        return true;
    }
    return false;

}
void solve()
{
    string s, t;
    cin>>s>>t;
    if(s.length() != t.length()){cout<<"No"<<endl;return;}
    for (int i = 0; i < s.length(); i++)
    {
        if(vowelChecker(s[i])!=vowelChecker(t[i])){cout<<"No"<<endl;return;}
    }
    cout<<"Yes"<<endl;
    
}

int main()
{
    long long n=1;
    //cin>>n;
    while (n--)
    {
        solve();
    }
    
}