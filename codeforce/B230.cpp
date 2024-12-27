#include <bits/stdc++.h>
using namespace std;
int main()
{
   unsigned long long int tast;
    cin >> tast;
    for (int k = 0; k < tast; k++)
    {
       unsigned long long int number, ans = 0;
        cin >> number;
        for (long long int i = 1; i <= number; i++)
        {
            if (number % i == 0)
            {
                ans++;
                // cout << ans << endl;
            }
            if (ans > 3)
            {
                break;
            }
        }
        if (ans == 3)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}