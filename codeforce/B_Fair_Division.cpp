#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void find_ans()
{
    ll n;
    cin >> n;
    ll array[n];
    ll ans1 = 0, ans2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        if (array[i] == 1)
            ans1++;
        if (array[i] == 2)
            ans2++;
    }
    ll ans = ans1 - 2;
    if (ans2 % 2 == 0 && ans1 %2==0)
    {
        cout << "YES" << endl;
    }
    else if (ans2 % 2 != 0 and ans1 > 0 and ans % 2 == 0)
    {    
         cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}
int main()
{
    ll tast;
    cin >> tast;
    for (int i = 0; i < tast; i++)
    {
        find_ans();
    }
}