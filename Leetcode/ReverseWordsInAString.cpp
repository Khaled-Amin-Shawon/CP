/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
using namespace std;
string reverseWords(string s)
{
    vector<string> v;
    string temp = "";
    for (auto c : s)
    {
        if (c == ' '){
            if (temp.size() != 0)
                v.push_back(temp);
            temp = "";
        }
        else temp = temp + c;
    }
    if (temp.size() != 0) v.push_back(temp);
    reverse(v.begin(), v.end());
    string ans = v[0];
    for (int i = 1; i < v.size() - 1; i++)
        ans = ans + " " + v[i];
    ans = ans + " " + v[v.size() - 1];
    return ans;
}
int main()
{
    string s;
    getline(cin, s);
    cout << reverseWords(s) << endl;
    return 0;
}