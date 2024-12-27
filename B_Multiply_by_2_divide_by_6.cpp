#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int bigKhaled()
{
    //cout<<"hello Khaled"<<endl;
    ll num,i;
    cin>>num;
    if(num==1) return 0;
    else{
    for ( i = 0; num!=1; i++)
    {
        ll mod=num%6;
        if (mod==4 or mod==2)
        {
            return -1;
        }
        else if(mod==0)    num=num/6;
        else num=num*2;
        // cout<<i<<" "<< num <<" "<<mod<< endl;
    }
    }
    return i;
}
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
       ll k= bigKhaled();
       cout<<k<<endl;
    }
    
}