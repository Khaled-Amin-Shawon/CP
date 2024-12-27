/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;
char solve(string str, int l, int r, char x, char ans)
{
    int mid= (l+r)/2;
    if(str[r]<x)return ans;
    if(str[l]>x) return str[l];
    if(str[mid] > x) return ans=solve(str,l,mid-1,x,str[mid]);
    return ans=solve(str,mid+1,r,x,ans);

}
int main()
{
    string str;
    cin>>str;
    char c;
    cin>>c;
    char ans='0';
    ans=solve(str,0,str.size()-1,c,ans);
    cout<<ans<<endl;
    
}