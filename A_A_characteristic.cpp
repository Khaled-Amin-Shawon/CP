#include <bits/stdc++.h>
using namespace std;

void khaled()
{
    int n, k;
    cin >> n >> k;
    int i = 0, f = 0;
    while (n >= i)
    {
        int j = n - i;
        if (i * (i - 1) / 2 + j * (j - 1) / 2 == k)
        {
            cout << "YES" << endl;
            f = 1;
            for (int c = 0; c < i; c++)
            {
                cout << "1 ";
            }
            for (int c = 0; c < j; c++)
            {
                cout << "-1 ";
            }
            cout << endl;
            return;
        }
        i++;
    }
    if (f == 0)
        cout << "NO" << endl;
    return;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        khaled();
    }
    return 0;
}