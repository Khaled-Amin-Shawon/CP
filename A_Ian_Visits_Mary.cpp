#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>> n;
    while (n--)
    {
        long long x,y;
        cin>>x>>y;
        if(x!=y)
        {
            cout<<"1\n"<<x<<" "<<y<<endl;
        }
        else
        {
            cout<<"2\n"<<x-1<<" "<<y<<endl<<x<<" "<<y<<endl;
        }
        
    }
    
}