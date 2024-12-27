#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void bigKhaled()
{

    ll num;
    bool ans = true;
    cin >> num;
    int array[num];

    for (int i = 0; i < num; i++)
        cin >> array[i];

    sort(array, array + num);

    for (int i = 0; i < num - 1; i++)
    {
        if (array[i] >= array[i + 1])
        {
            ans = false;
            break;
        }
    }
    if (ans == false)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        bigKhaled();
    }
}