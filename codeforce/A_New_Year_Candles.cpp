#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll a, b;
    cin >> a >> b;
    ll sum = a;
    do
    {
        ll tamp = a % b;
        a = a / b;
        sum += a;
        a += tamp;
    } while ((a >= b));

    cout << sum << endl;
}