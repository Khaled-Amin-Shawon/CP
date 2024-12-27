#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tast;
    cin >> tast;
    for (int k = 0; k < tast; k++)
    {
        int num, ans = 0;
        cin >> num;
        int array[num];
        for (int i = 0; i < num; i++)
        {
            cin >> array[i];
        }
        if (num == 1)
        {
            cout << ans << endl;
            ;
        }
        else
        {
            for (int i = 1; i < num; i++)
            {
                ans = max(ans, array[i] - array[0]);
            }
            for (int i = 0; i < num - 1; i++)
            {
                ans = max(ans, array[num - 1] - array[i]);
            }
            for (int i = 1; i < num ; i++)
            {
                ans = max(ans, array[i - 1] - array[i]);
            }
            cout << ans << endl;
        }
    }
}