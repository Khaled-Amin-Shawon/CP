/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>

using namespace std;

bool cmp(const pair<double, double>& a, const pair<double, double>& b) {
    if(a.first<b.first) return true;
    else if(a.first==b.first) return (a.second>b.second);
    else return false;
}

int main()
{
    int n;
    cin >>n;
    vector<pair<int,int> >v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    sort(v.rbegin(),v.rend(),cmp);
    int sz= unique(v.begin(),v.end())-v.begin();
    cout<<"Answer is "<<sz<<endl;
    for (int i = 0; i < sz; i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}