#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll num, ans = 0;
    cin >> num;
    while (num > 0)
    {
        ans = ans + (num % 2);
        num = num / 2;
    }
    cout << ans << endl;
}