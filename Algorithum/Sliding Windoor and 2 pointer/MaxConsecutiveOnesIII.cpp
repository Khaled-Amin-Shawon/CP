/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;
int MaxLength(vector<int>v, int k){
    int l=0,r=0,length=0,zero=0,zeroIndex=0;
    while (r<v.size())
    {
        if(v[r]==0){
            zero++;
            if(zero>k) l=zeroIndex;
            zeroIndex=r;
        }
        length= max(length,r-l+1);
        r++;
    }
    return length;
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for (int i = 0; i < n; i++) cin>>v[i];
    int maxLength =MaxLength(v,k);
    cout<<maxLength<<endl;
}