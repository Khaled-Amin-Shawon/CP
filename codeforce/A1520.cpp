#include <bits/stdc++.h>
using namespace std;
int solve()
{
    int n;
    cin >> n;
    char str[n];
    scanf("%s", str);
    for (int i = 0; i < n; i++)
    {
        if (str[i] != str[i + 1])
        {
            for (int j = i + 1; j < n; j++)
            {
                if (str[i] == str[j])
                {
                    cout << "NO" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}
int main()
{
    int tast;
    cin >> tast ;
     for (int i = 0; i < tast; i++)
    {
        solve();
    }
}
