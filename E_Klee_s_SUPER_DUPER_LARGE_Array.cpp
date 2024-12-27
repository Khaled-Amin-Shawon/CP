#include <bits/stdc++.h>
using namespace std;
/* TYPES  */
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

/* FUNCTIONS */
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back 
/* UTILS */
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
ll min(ll a,int b) { if (a<b) return a; return b; }
ll min(int a,ll b) { if (a<b) return a; return b; }
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

/*  All Required define Pre-Processors and typedef Constants */
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll sum(ll l,ll r, ll k){
    return (r*(r+1)/2) - (l*(l-1)/2) + ((r-l+1)*k);
}

void solve() {
    ll n, k;
    cin >> n >> k;
    ll l=0 , r=n-1, ans= LONG_LONG_MAX;
    while (l<=r)
    {
        ll mid = (r+l)/2;
        ll sum1 = sum(0, mid, k);
        ll sum2 = sum(mid+1, n-1, k);
        if(sum1 == sum2) {
            cout<<0<<endl;
            return;
        } else if(sum1 <= sum2) {
            l = mid + 1;
            ans = min(ans, abs(sum2 - sum1));
        } else {
            r = mid - 1;
            ans = min(ans, abs(sum1 - sum2));
        }
    }
    cout<<ans<<endl;
    
}
void solve(){
    ll n, k;
    cin>>n>>k;
    ll l=k,r=n+k-1;
    ll presum= (l-1)*l/2, totalsum=r*(r+1)/2;
    ll sum=totalsum-presum;
    ll midsum= sum/2;
    while (l<=r)
    {
        ll mid=(l+r)>>1;
        ll cursum=(mid*(mid+1)/2)-presum;
        if(cursum<=midsum){
            l=mid+1;
            
        }
    }
    
}

int main()
{
    op();
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}
