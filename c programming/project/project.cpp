#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cin >> number;
    double decimal, count = 0, i = 0;
    double ans = 0;
    decimal = number;
    while (number != 0)
    {
        int tamp = number % 2;
        number /= 2;
        ans += tamp * pow(10, i);
        i++;
    }
    cout<<ans<<endl;
}
