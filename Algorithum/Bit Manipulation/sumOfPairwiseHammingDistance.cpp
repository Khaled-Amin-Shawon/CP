/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;
int hamminDistance(vector<int>v){
    int ans=0;
    for (int i = 0; i < 32; i++)
    {   
        int one=0, zero=0;
        for (int j = 0; j <v.size(); j++)
        {
            if(v[j]&(1<<i)) one++;
            else zero++;
        }
        ans+=one*zero*2;
        //cout<<one<<" "<<zero<<" "<<ans<<endl;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
    int ans = hamminDistance(v);
    cout<<"Distance is "<<ans<<endl;
    
}