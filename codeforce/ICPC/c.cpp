#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ts;
    cin>>ts;
    for (int i = 0; i < ts; i++)
    {
        int s;
        cin>>s; 
        int max=0,re=0;
        for (int j = 0; j < s-1; j++)
        {
            int A,B;
            cin>>A>>B;
            re=re+A-B;
            if (max<=re)
            {
                max=re;
            }
            
        }
        cout<<"Case "<<i+1<<": "<<max<<endl;
        
    }
    
}