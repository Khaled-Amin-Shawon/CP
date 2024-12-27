#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    cin >> s;
    int y = strlen(s);
    for (int i = 0; i < y; i++)
    {
        if (s[i] == '-' && s[i + 1] == '-')
        {
            cout << "2";
            i++;
        }
        else if (s[i] == '-' && s[i + 1] == '.')
        {
            cout << "1";
            i++;
        }
        else
        {
            cout << "0";
        }
    }
}