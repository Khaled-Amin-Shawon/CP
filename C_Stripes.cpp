#include<bits/stdc++.h>
using namespace std;

void bigKhaled()
{
    char a[8][8];
        int b[8];
        for(int i=0; i<8; i++)
            cin>> a[i];
        for(int i=0; i<8; i++)
        {
            b[i]=0;
            for(int j=0; j<8; j++)
                {
                    if(a[i][j]=='R')       b[i]++;
                }
        }
        sort(b,b+8);
        if(b[7]==8) cout <<"R"<<endl;

        else cout<<"B" << endl;

}

int main ()
{
    long long t; 
    cin>>t; 
    while(t--)
    {
        bigKhaled();
    }
  
}