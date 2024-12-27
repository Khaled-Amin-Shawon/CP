#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int num; cin>> num;
    if (array[num]>0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main()
{
    int tast;
    cin>>tast;
    unordered_map
    for (int i = 1; i < 400000; i++)
    {
        for (int j = 1; j < 400000; i++)
        {
            long long int k=pow(i,3)+pow(j,3) ;
            array[k]++;
        }
    }
    for (int i = 0; i < tast; i++)
    {
        solve();
    }
}