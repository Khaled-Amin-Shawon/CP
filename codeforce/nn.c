#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string c="hello";
    int j=0,cn;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==c[j])
        {
            j++;
        }
    }
    if(j==5)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    return 0;
}
