#include<bits/stdc++.h>
using namespace std; 
void solve(){
    int num;
    cin>>num;
    int array[num];
    for (int i = 0; i < num; i++)
    {
        cin>>array[i];
    }
    int count =num;
    for (int i = 0; i < num; i++)
    {
        cout<< array[i]<<" "<<array[i+1]<<endl;
        if (array[i]-array[i+1]<=1 || array[i+1]-array[i]<=1 )
        {
            count--;
            cout<<count<<endl;
        }
    }
    if (count==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main()
{
    int tast;
    cin>>tast;
    for (int  i = 0; i < tast; i++)
    {
        solve();
    }
    
    return 0;
}