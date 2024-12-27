/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;

int MaxLength(string v, int k)
{
    int l = 0, r = 0, length = 0;
    map<char, int> m;
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
    string v;
    cin>>v;
    int maxLength = MaxLength(v, k);
    cout << maxLength << endl;
}