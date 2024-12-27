/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;
int MaxPoint(vector<int> v, int k){
    int left=0, right=0, maxSum=0;
    int sz= v.size()-1;
    for (int i = 0; i <k; i++)
        left+=v[i];
    maxSum= left;
    for (int i = k-1; i >= 0; i--)
    {
        left=left-v[i];
        right+=v[sz--];
        maxSum=max(maxSum, left+right);
    }
    return maxSum;
}
int main()
{
    int n; cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int k=0;
    cin>>k;
    int ans= MaxPoint(v,k);
    cout<<"Answer is "<<ans<<endl;
    
}