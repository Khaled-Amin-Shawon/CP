#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main()
{
    ll a,b;
    cin>>a>>b;
    ll m=max(a,b), n=min(a,b);
    cout<<n<<" "<<(m-n)/2<<endl;
}