#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long a,b,c;
    cin>>a>>b>>c;
    if(a<b){
        if(b<c) cout <<"STAIR"<<endl;
        else if (b>c) cout<<"PEAK"<<endl;
        else cout<<"NONE"<<endl;
    }
    else cout<<"NONE"<<endl;
}

int main()
{
    long long n;
    cin>>n;
    while (n--)
    {
        solve();
    }
    
}