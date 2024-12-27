#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void Big_Khaled()
{
}

int main()
{
    ll t;
    cin >> t;
    ll ans = 0;
    while (t--)
    {
        string s;
        cin >> s;
        if (s == "Tetrahedron")
        {
            ans += 4;
        }
        else if (s == "Cube")
        {
            ans += 6;
        }
        else if (s == "Octahedron")
        {
            ans += 8;
        }
        else if (s == "Dodecahedron")
        {
            ans += 12;
        }
        else if (s == "Icosahedron")
        {
            ans += 20;
        }
    }
    cout << ans << endl;
}