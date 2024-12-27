#include <bits/stdc++.h>
using namespace std;

using i64 = long long;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string t;
        cin >> t;

        string s;
        for (int i = n - 1; i >= 0;)
        {
            if (t[i] == '0')
            {
                int x = (t[i - 2] - '0') * 10 + t[i - 1] - '0' - 1;
                s += 'a' + x;
                i -= 3;
            }
            else
            {
                s += 'a' + t[i] - '0' - 1;
                i--;
            }
        }
        reverse(s.begin(), s.end());
        cout << s << "\n";
    }

    return 0;
}