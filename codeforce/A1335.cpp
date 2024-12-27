#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int candit=0 , ans=0;
    cin>>candit;
    if (candit==2 || candit==1)
    {
        cout<<"0"<<endl;
    }
    else if (candit%2==0)
    {
        ans=(candit/2)-1;
    }
    else
    {
        ans=(candit/2);
       
    }
     cout<<ans<<endl;
}
int main()
{
    long long int tast;
    cin>>tast;
    for (long long int i = 0; i < tast; i++)
    {
        solve();
    }
    
}