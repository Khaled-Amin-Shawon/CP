/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
using namespace std;

vector<int> merge(vector<int> v1, vector<int> v2){
    vector<int> ans;
    int i = 0, j = 0;
    while (i < v1.size() && j < v2.size())
    {
        if (v1[i] < v2[j])
        {
            ans.push_back(v1[i]);
            i++;
        }
        else
        {
            ans.push_back(v2[j]);
            j++;
        }
    }
    while (i < v1.size())
    {
        ans.push_back(v1[i]);
        i++;
    }
    while (j < v2.size())
    {
        ans.push_back(v2[j]);
        j++;
    }
    return ans;
}

vector<int> mergeSort(vector<int> v){
    if (v.size() == 1)
        return v;
    vector<int> v1, v2;
    for (int i = 0; i < v.size() / 2; i++)
        v1.push_back(v[i]);
    for (int i = v.size() / 2; i < v.size(); i++)
        v2.push_back(v[i]);
    v1 = mergeSort(v1);
    v2 = mergeSort(v2);
    return merge(v1, v2);
}

void solve()
{
    ll n;
    cout << "Enter the size of array: ";
    cin>>n;
    cout << "Enter the elements of array: ";
    vector<int> v(n);
    fr(i,n) cin>> v[i];
    vector<int> sorted_array=mergeSort(v);
    fr(i,n) cout<<sorted_array[i]<<" ";
    cout<<endl;

}
int main()
{
    
    ll t = 1;
    while (t--)
    {
        solve();
    }
}