#include<bits/stdc++.h>
using namespace std;

void p1(){
    cout<<"##";
}
void p2(){
    cout<<"..";
}
void solve()
{
    long long n;
    cin>>n;
    for (long long i = 0; i < n; i++)
    {
       for (long long k = 0; k < 2; k++)
       {
         if((i)%2==0){
            for (long long  j = 0; j < n; j++)
            {
                if(j%2==0) p1();
                else p2();
            }  
         }
        else{
             for (long long  j = 0; j < n; j++)
            {
                if(j%2==0) p2();
                else p1();
            }
        }
        cout<<endl;
       }
       
    }
    
}

int main()
{
    long long n;
    cin>>n;
    while (n--)
    {
        solve();
    }
    
}