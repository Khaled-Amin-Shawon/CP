#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main()
{
    ll a,b,c,d,num;
    cin>>a>>b>>c>>d>>num;
    ll count=0;
    for (ll i = 1; i <= num; i++)
    {
        if (i%a==0 || i%b==0 || i%c==0 || i%d==0)
        {
            count++;
        }
    }
    cout<<count<<endl;
     
}