/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int array[n];
    for (int i = 0; i <n ; i++)
    {
        cin>>array[i];
    }
    int k;
    cin>>k;
    vector<pair<int,int>> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i!=j && array[i]-array[j]==k)
            v.push_back({array[i],array[j]});
        }
    }
    sort(v.begin(),v.end());
    int sz= unique(v.begin(),v.end())-v.begin();
    cout<<sz<<endl;
    //for(auto i :v) cout<<i.first<<" "<<i.second<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}