#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
long double Big_Khaled()
{
    string s, t;
    cin >> s >> t;
    bool flag = false;

    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] == 'a' && t.length() == 1)
        {
            return 1;
        }
        else if (t[i] == 'a' && t.length() != 1)
        {
            return -1;
        }
    }
    return pow(2,s.length());
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    ll test = 1;
    cin >> test;
    while (test--)
    {
        long double x = Big_Khaled();
        cout << x << endl;
    }
    return 0;
}
