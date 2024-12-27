#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int tast;
    cin >> tast;
    for (int i = 0; i < tast; i++)
    {
        long long int a, b, c, T1, T2;
        cin >> a >> b >> c;
        T1 = a - 1;
        if (T1 < 0)
            T1 = T1 * (-1);
        long long int ans = c - b;
        if (ans < 0)
            ans = ans * (-1);
        T2 = c - 1;
        if (T2 < 0)
            T2 *= (-1);
        T2=T2+ans;
        if (T1 > T2)
            cout << "2" << endl;
        else if (T1 < T2)
        {
            cout << "1" << endl;
        }
        else if (T1 == T2)
        {
            cout << "3" << endl;
        }
    }
}