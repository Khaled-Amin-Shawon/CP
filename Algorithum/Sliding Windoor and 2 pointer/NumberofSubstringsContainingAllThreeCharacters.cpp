/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;
int numberOfsubstring(string str){
    int ans=0;
    map<char,int>map;
    map['a']=-1; map['b']=-1; map['c']=-1;
    for (int i = 0; i < str.size(); i++)
    {
        map[str[i]]=i;
        if (map['a']!=-1 && map['b']!=-1 && map['c']!=-1){
            ans= ans+1+min(map['a'],min(map['b'],map['c']));
        }
    }
    return ans;
}
int main()
{
    string str;
    cin >> str;
    int ans=numberOfsubstring(str);
    cout<<ans<<endl;
}