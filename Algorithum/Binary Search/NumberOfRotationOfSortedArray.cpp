/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;
int solve( vector<int>arr, int i, int r)
{
    int mid=(i+r)/2;
    if(i==r)return mid;
    if(mid<r && arr[mid+1]<arr[mid]) return mid+1;
    if(mid>i && arr[mid]<arr[mid-1]) return mid;
    if(arr[r]>arr[mid]) return solve(arr,i,mid-1);
    return solve(arr,mid+1,r);

}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int ans=solve(arr,0,arr.size());
    cout<<ans<<endl;
}