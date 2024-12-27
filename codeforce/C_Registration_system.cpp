// #include <bits/stdc++.h>
// #include<string.h>
// #define ll long long int
// using namespace std;
// int main()
// {
//     vector <string> s;
//     ll num;
//     cin >> num;
//     for (ll i = 0; i < num; i++)
//     {
//         string k;
//         cin >> k;
//         s.push_back(k);
//     }
//     ll count = 0;
//     reverse(s.begin(), s.end());
//     for (ll i = 0; i < num; i++)
//     {
//         for (ll l = i+1; l < num; l++)
//         {
//             if (s[i] == s[l])
//             {
//                 count++;
//             }
//         }
//         if (count > 0)
//         {
//             string str = to_string(count);
//             string st= s[i];
//             int n = st.length();
//             s[i].insert(n, str);
//             count = 0;
//         }
//         else
//         {
//             s[i]="OK";
//         }
        
//     }
//     reverse(s.begin(), s.end());
//     for (ll i = 0; i < s.size(); i++)
//     {
//         cout<<s[i]<<endl;
//     }
// }
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, int> database;
    string s;
    while (n--)
    {
        cin >> s;
        if (database.count(s) == 0)
        {
            cout << "OK" << endl;
            database[s] = 1;
        }
        else
        {
            cout << s << database[s] << endl;
            database[s] += 1;
        }
    }
    return 0;
}