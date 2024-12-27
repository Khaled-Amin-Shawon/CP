#include<iostream>
using namespace std;

int nCr(int n, int r)
{

  if (r > n)
    return 0;
  long long m = 1000000007;
  long long inv[r + 1] = { 0 };
  inv[0] = 1;
  if(r+1>=2)
  inv[1] = 1;

  for (int i = 2; i <= r; i++) {
    inv[i] = m - (m / i) * inv[m % i] % m;
  }

  int ans = 1;

  for (int i = 2; i <= r; i++) {
    ans = ((ans % m) * (inv[i] % m)) % m;
  }

  for (int i = n; i >= (n - r + 1); i--) {
    ans = ((ans % m) * (i % m)) % m;
  }
  return ans;
}

int main()
{
    int t; cin>>t; while(t--)
    {
        int n; cin>>n;
        int x,ev=0,od=0;
        while(n--)
        {
            cin>>x;
            if(x&1) od++;
            else ev++;
        }
        int ans=0;
        for(int i=1; i<=ev; i++) ans+=nCr(ev,i);
        if(od&1)
            for(int i=1; i<=od; i+=2) ans+=nCr(od,i);
        else for(int i=2; i<=od; i+=2) ans+=nCr(od,i);

        cout<<ans<<endl;

    }
}