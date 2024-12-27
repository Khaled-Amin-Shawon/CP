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
    if((arr[l]>x && arr[l+1]>x) || (arr[r]<x && arr[r-1]<x)) return -1 ;
    int mid= (l+r)/2;
    if(arr[mid]==x) return mid;
    if(r>=mid && arr[mid+1]==x) return mid+1;
    if(l<=mid && arr[mid-1]==x) return mid-1;
    if(arr[mid]>x) return solve(arr,l,mid-2,x);
    return solve(arr,mid+2,r,x);
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
    //sort(arr.begin(),arr.end());
    int x; cin>>x;
    int ans=solve(arr,0,arr.size()-1,x);
    cout<<ans<<endl;
    
}