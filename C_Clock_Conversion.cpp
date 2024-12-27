#include<bits/stdc++.h>
using namespace std;

void solve() {
    char C; int A, B; cin >> A >> C >> B;
    int V = A%12; if (V == 0) V = 12;
    if (V < 10) {
        cout << 0 << V;
    } else cout << V;
    cout << ":";
    if (B == 0) {
        cout << "00";
    } else if (B < 10) {
        cout << 0 << B;
    } else cout << B;
    cout << " " << (A>=12?"PM":"AM") << endl;
 
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