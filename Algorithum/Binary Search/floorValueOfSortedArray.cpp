/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> arr, int l, int r, int x)
{
    int mid= (l+r)/2;
    if(l==r) return arr[mid];
    if(x<arr[0]) return -1;
    if(arr[r]<x) return arr[r];
    if(arr[mid] == x) return arr[mid];
    if(arr[mid]>x) return solve(arr,l,mid-1,x);
    if(arr[mid]<x) return solve(arr,mid,r,x);
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int x; cin>>x;
    int ans=solve(arr,0,arr.size()-1,x);
    cout<<ans<<endl;
    
}