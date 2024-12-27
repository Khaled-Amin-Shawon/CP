/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;

int MaxLength(vector<int> v, int k)
{
    int l = 0, r = 0, length = 0;
    map<int, int> m;
    while (r < v.size())
    {
        m[v[r]]++;
        if (m.size() > k)
        {
            m[v[l]]--;
            if (m[v[l]] == 0)
                m.erase(v[l]);
            l++;
        }
        if (m.size() <= k)
            length = max(length, r - l + 1);
        r++;
    }
    return length;
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int maxLength = MaxLength(v, k);
    cout << maxLength << endl;
}