#include<bits/stdc++.h> 
#define ll long long int 
using namespace std;
int main()
{
    ll k,e;
    cin>>k>>e;
    for (ll i = 1; i <=10; i++)
    {
        if((k*i)%10==0 || (k*i-e)%10==0) {
            cout<<i<<endl;
            break;
        }
    }
    
}