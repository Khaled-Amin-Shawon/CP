/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;

int FindMaxLength(string str) {
    map<char, int> map;
        int l = 0, r = 0, maxlength = 0;
        while (r < str.length()) {
            if (map.find(str[r]) == map.end() || map[str[r]] < l) {
                map[str[r]] = r;
                maxlength = max(maxlength, r - l + 1);
                r++;
            }
            else  l = map[str[r]] + 1;
        }
        return maxlength;
}

int main()
{
    string str;
    cin>>str;
    int ans =FindMaxLength(str);
    cout<<"leanth of the Substring is "<<ans<<endl;
}