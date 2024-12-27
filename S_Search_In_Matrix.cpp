#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int mat[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }

    int x;cin>>x;
    bool a=false;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           if(mat[i][j]==x)
           {
            a=true;
            break;
           }
        }
    }

    if(a)cout<<"will not take number"<<endl;
    else cout<<"will take number"<<endl;
}