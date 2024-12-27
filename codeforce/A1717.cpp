#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,answer;
    cin>>t;
   for(int i=0; i<t; i++)
    {
        cin>>n;
        answer=n+2*(n/2)+2*(n/3);//ratio-1+ratio-2+ratio-3
        cout<<answer<<'\n';
    }
}