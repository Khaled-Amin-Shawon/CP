#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll ary[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> ary[i];
    }
    sort(ary, ary + 4);
    ll k = ary[3] - ary[0];
    cout << k;
    for (int i = 1; i < 3; i++)
    {
        cout << " " << ary[i] - k;
    }
    cout << endl;
    return 0;
}