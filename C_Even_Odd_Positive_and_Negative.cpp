#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int a[x];
    for (int i = 0; i < x; i++)
        cin >> a[i];

    int e = 0, o = 0, p = 0, n = 0;
    for (int i = 0; i < x; i++)
    {
        if (a[i] < 0)
        {
            n++;
            if (a[i] % 2 == 0)
                e++;
            else
                o++;
        }
        else
        {
            if (a[i] == 0)
                p--;

            p++;
            if (a[i] % 2 == 0 || a[i] == 0)
                e++;
            else
                o++;
        }
    }

    cout << "Even: " << e << endl;
    cout << "Odd: " << o << endl;
    cout << "Positive: " << p << endl;
    cout << "Negative: " << n << endl;
}