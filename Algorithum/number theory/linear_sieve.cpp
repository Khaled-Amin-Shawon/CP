#include<bits/stdc++.h>
using namespace std;
const int mx = 2e6+10;

int mark[mx];
vector<int> prime;

void LinearSieve(){
    register long long i, j;
    for(i=2, j=0; i<mx; i++, j=0){
        if(!mark[i]){mark[i] = i;prime.push_back(i);}
        while(j<(prime.size()) && prime[j]<=mark[i] && i*prime[j]<mx)
            mark[i * prime[j]] = prime[j], j++;
    }
}
int main()
{
    LinearSieve();
    int n; cin>>n;
    for(int i=0; i<n; i++) cout<<prime[i]<<" ";
}
