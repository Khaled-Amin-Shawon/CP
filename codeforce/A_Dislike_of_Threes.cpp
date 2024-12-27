#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tast;
    cin >> tast;
    long long int set[1000];
    for (long long int i = 0; i < 1000; i++)
    {
        long long int k = 1;
        while (i < 1000)
        {
            if (k % 3 != 0 && k % 10 != 3)
            {
                set[i] = k;
                i++;
            }
            k++;
        }
    }
    for (int i = 0; i < tast; i++)
    {
        long long int n;
        cin >> n;
        cout << set[n - 1] << endl;
    }
    return 0;
}