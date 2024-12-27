#include <bits/stdc++.h>
using namespace std;
int main()
{
    int level;
    cin >> level;
    int p, pl;
    cin >> p;
    int x[level] = {0};
    for (int i = 0; i < p; i++)
    {
        cin >> pl;
        x[pl - 1]++;
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> pl;
        x[pl - 1]++;
    }
    bool ans = true;
    for (int i = 0; i < level; i++)
    {
        if (x[i] == 0)
        {
            ans = false;
            break;
        }
    }
    if (ans == true)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
}