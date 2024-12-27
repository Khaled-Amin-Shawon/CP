#include <bits/stdc++.h>
using namespace std;
int main()
{
    int b;
    cin >> b;
    vector<long long> b_array(b);
    for (int i = 0; i < b; i++)
    {
        cin >> b_array[i];
    }
    sort(b_array.begin(), b_array.end());
    int g;
    cin >> g;
    vector<long long> g_array(g);
    for (int i = 0; i < g; i++)
    {
        cin >> g_array[i];
    }
    sort(g_array.begin(), g_array.end());
    int ans = 0, bi = 0, gi = 0;
    while (true)
    {
        if (bi == b)
            break;
        if (gi == g)
            break;
        if ((b_array[bi] == g_array[gi]) || (b_array[bi] + 1 == g_array[gi]) || (b_array[bi] == g_array[gi] + 1))
        {
            ans++;
            bi++;
            gi++;
        }
        else if (b_array[bi] > g_array[gi])
            gi++;
        else
            bi++;
    }
    cout << ans << endl;
}