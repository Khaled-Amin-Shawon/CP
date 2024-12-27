#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int sol[num], max_pos = 0, max = 0;
    for (int i = 0; i < num; i++)
    {
        cin >> sol[i];
        if (sol[i] > max)
        {
            max_pos = i;
            max = sol[i];
        }
    }
    int min = max, min_pos = 0;
    for (int i = 0; i < num; i++)
    {
        if (min >= sol[i])
        {
            min_pos = i;
            min = sol[i];
        }
    }
    int ans = max_pos + (num - min_pos - 1);
    if (max_pos > min_pos)
        ans -= 1;
    cout << ans << endl;
}