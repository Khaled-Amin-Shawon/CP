#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


    ll test=150;
//cin>>test;
    while(test--)
    {
        ll num;
        cin>>num;
        if(num==0) return 0;
        vector<int>v;
        ll sum=0;
        for (int i = 0; i < num; i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
            sum+=a;
        }
        sort(v.begin(),v.end());
        int sum1=0,sum2=0;
        for (int i = 0; i < num; i=i+2)
        {
            sum1+=v[i];
        }
        for (int i = 1; i < num; i=i+2)
        {
            sum2+=v[i];
        }
        cout<<sum1<<" "<<sum2<<endl;
        
        
    }
    return 0;
}
