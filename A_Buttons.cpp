#include<iostream>
using namespace std;
int main ()
{
    long long a,b,n=2,m=0;
    cin>>a>>b;
    while (n--)
    {
        if (a>=b)
        {
            m+=a;
            a--;
        }
        else
        {
            m+=b;
            b--;
        }
        
    }
    cout<<m<<endl;
    
}