#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n, l;
    cin >> n >> l;
    vector<double> array;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        array.push_back(c);
    }
    sort(array.begin(),array.end());
    double m = array[0];
    double ans;
    for (int i = 0; i < n - 1; i++)
    {
        ans = (array[i + 1] - array[i]) / 2 ;
        m = max(m, ans);
    }
    m = max(m, l - array[n - 1]);
    cout << fixed << setprecision(10) << m << endl;

    return 0;
}