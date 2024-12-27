#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int num;
    cin >> num;
    if (num == 0)
    {
        return 0;
    }
    else
    {
       long long  int c = num / 10, d = num % 10;
       long long  int r = c - (5 * d);
        if (r % 17 == 0)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
}