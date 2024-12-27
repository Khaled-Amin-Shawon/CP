#include <bits/stdc++.h>
using namespace std;
long long a[100][100] = {0};
long long r(int i, int j)
{
    if (a[i][j] != 0)
    {
        return a[j][i];
    }
    else if (i == 2 || j == 2)
    {
        a[i][j] = max(i, j);
        a[j][i] = a[i][j];
        return a[i][j];
    }
    else
    {
        a[j][i] = r(i - 1, j) + r(i, j - 1);
        a[i][j] = a[j][i];
        return a[i][j];
    }
}

int main()
{
    int n=1;
    cin>>n;
    if (n == 1)
        cout << "1" << endl;
    else
        cout << r(n, n) << endl;
    return 0;
}