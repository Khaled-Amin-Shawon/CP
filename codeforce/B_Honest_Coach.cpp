#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void Big_Khaled()
{
    ll num;
    cin >> num;
    ll array[num];
    for (ll i = 0; i < num; i++)
    {
        cin >> array[i];
    }
    sort(array, array + num);
    ll ans = LLONG_MAX;
    for (ll i = 1; i < num; i++)
    {
        ans = min(ans, array[i] - array[i - 1]);
    }
    cout << abs(ans) << endl;
}

int main()
{
    ll tast;
    cin >> tast;
    for (ll i = 0; i < tast; i++)
    {
        Big_Khaled();
    }
}