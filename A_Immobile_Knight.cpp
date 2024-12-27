#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
// bool ar[1000001];
// void seive()
// {
//     ll mx=1000000;
//     for(int i=0;i<=mx;i++)
//     {
//         ar[i]=true;
//     }
//     ar[0]=ar[1]=false;
//     for(int i=2;i*i<=mx;i++)
//     {
//         if(ar[i]==true)
//         {
//             for(int j=i*i;j<=mx;j+=i)
//             {
//                 ar[j]=false;
//             }
//         }
//     }
// }
 
 
int main(){
    
    ll tc;
    cin>>tc;
    while(tc--){
        ll n,m;
        cin>>n>>m;
        if(n==1 || m==1)
            cout<<n<<" "<<m<<endl;
        else
            cout<<n-1<<" "<<m-1<<endl;
    }
}