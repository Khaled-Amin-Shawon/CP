#include<bits/stdc++.h>
#define ll long long int
using namespace std;

long long int fact( long long int n)
{
    if (n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
 
int main()
{
    ll array[27]={0};
    string s;
    cin>>s;
    for (ll i = 0; i < s.size(); i++)
    {
        for (ll j = i+1; j < s.size(); j++)
        {
            if (s[i]==s[j] && s[i]>65)
            {

                // cout<<s[j]<<endl;
                array[i]++;
                s[j]='A';
            }
            
        }
        
    }
    ll ans =fact(s.size());
    // cout<<ans<<endl;
    for (long long int i = 0; i < 27; i++)
    {
        if(array[i]!=0)
        {
            // cout<<array[i]<<endl;
            ans/=fact(array[i]+1);
        }
    }
    
    cout<<ans<<endl;
}