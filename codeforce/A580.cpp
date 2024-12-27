#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count;
    cin >> count;
    int a[count];
    for (int i = 0; i < count; i++)
    {
        cin >> a[i];
    }
    int tamp = 0, result = 0;
    for (int i = 0; i < count - 1; i++)
    {
        if (a[i] <= a[i + 1])
        {
            result++;
        }
        else
        {
            if (tamp < result)
            {
                tamp = result;
                result = 0;
            }
            else
            {
                result = 0;
            }
        }
    }
    if (tamp > result)
    {
        cout << tamp+1 << endl;
    }
    else
    {
        cout << result+1 << endl;
    }
}