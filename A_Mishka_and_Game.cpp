#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m, c, sm = 0, cm = 0;
    while (n--)
    {
        cin >> m >> c;
        if (m > c)
            sm++;
        if (c > m)
            cm++;
    }
    if (sm < cm)
    {
        cout << "Chris" << endl;
    }
    if (sm > cm)
    {
        cout << "Mishka" << endl;
    }
    if (sm == cm)
    {
        cout << "Friendship is magic!^^" << endl;
    }
}