#include <bits/stdc++.h>
using namespace std;
vector<int>dp(10000);

int khaled_vai(int num,int a, int b)
{
    //cout<<num<<" ";
    if (dp[num])
    {
       return dp[num];
    }
    
    if (num==0) {
         dp[num]==1;
        return 1; //cout<<"return 1"<<endl;
    }
    if(num<0) {
         dp[num]==-1;
        return 0; //cout<<"return 0"<<endl;
    }
    int h=khaled_vai(num-b, a, b), k= khaled_vai(num - a,a,b);
    if (h==1 || k == 1)
    {
        {
             dp[num]==1;
            return 1; //cout<<"return 1"<<endl;
        }
    }
    else
    {
        {
            dp[num]==-1;
            return 0; //cout<<"return 0"<<endl;
        }
    }
    
    
}
int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    int h=khaled_vai(c-b,a,b), k= khaled_vai(c - a,a,b);
    if (h==1 || k == 1)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
       cout<<"No"<<endl;
    }
}