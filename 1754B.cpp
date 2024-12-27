#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void Big_khaled()
{
    ll num;
    cin >> num;
    if (num <= 3)
    {
        while (num != 0)
        {
            cout << num << " ";
            num--;
        }
    }
    else if (num % 2 == 0)
    {
        ll a = (num / 2) + 1, b = 1;
        while (a != num + 1)
        {
            cout << a << " " << b << " ";
            a++;
            b++;
        }
    }
    else
    {
        ll a = (num / 2) + 1, b = 1;
        while (a != num)
        {
            cout << a << " " << b << " ";
            a++;
            b++;
        }
        cout<<num;
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        Big_khaled();
        cout<<endl;
    }
}