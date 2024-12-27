#include <bits/stdc++.h>
using namespace std;
main()
{
    string s;
    cin >> s;
    int k = 0;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            s.erase(i - 1, 2);
            k++;
            i -= 2;
        }
    }
    cout << (k % 2 == 0 ? "NO" : "YES");
}