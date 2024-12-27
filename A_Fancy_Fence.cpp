#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void Bigkhaled()
{
    ll kon;
    cin >> kon;
    ll n=180-kon;
    if (360%n==0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        Bigkhaled();
    }
}