#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    for (int i = a / c; i <= b / c; i++)
    {
        if (i * c <= b && i * c >= a)
        {
            cout << i * c << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
    return 0;
}