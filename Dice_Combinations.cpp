#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

typedef long long ll;

ll solve(ll n) {
    vector<ll> dp(n+1, 0);
    dp[0] = 1;  // Base case: There's one way to sum up to 0 (do nothing)
    
    for(ll i = 1; i <= n; i++) {
        for(ll j = 1; j <= 6; j++) {
            if(i - j >= 0) {
                dp[i] = (dp[i] + dp[i - j]) % MOD;
            }
        }
    }
    return dp[n];
}

int main() {
    ll n;
    cin >> n;
    cout << solve(n) << "\n";
    return 0;
}
