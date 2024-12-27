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
    //cout<<arr[mid]<<endl;
    if(l==r) return arr[mid];
    if(x>arr[arr.size()-1]) return -1;
    if(arr[l]>x) return arr[l];
    if(arr[mid] == x) return arr[mid];
    if(arr[mid]>x) return solve(arr,l,mid,x);
    if(arr[mid]<x) return solve(arr,mid+1,r,x);
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