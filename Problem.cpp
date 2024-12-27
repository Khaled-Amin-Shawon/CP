#include <bits/stdc++.h>
using namespace std;
int find_solve(int a, int b)
{
    if (a == b)
    {
        cout << "YES" << endl;
        return 0;
    }
    int am = a % 2, bm = b % 2;
    if (am != bm)
    {
        cout << "NO" << endl;
        return 0;u
    }
    if (a > b)
    {
        int diff = a - b;
        if (diff % 2 == 0)
        {
            cout << "YES" << endl;
            return 0;
        }
        find_solve(a + 3, b - 1);
        return 0;
    }
    if (b > a)
    {
        int diff = b - a;
        if (diff % 4 == 0)
        {
            cout << "YES" << endl;
            return 0;
        }
        find_solve(a - 1, b + 1);
        return 0;
    }
}
int main()

{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        find_solve(a,b);
    }
}