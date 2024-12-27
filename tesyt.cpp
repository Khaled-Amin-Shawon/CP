#include <bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string> &strs)
{
    string s = strs[0], pre = strs[0];
    if (strs.size() == 1)
        return pre;
    for (int i = 1; i < strs.size(); i++)
    {
        string st = "";
        for (int j = 0; j < s.size(); j++)
        {
            if (pre[j] != strs[i][j])
                break;
            st += strs[i][j];
        }
        s = st;
    }
    return s;
}
int main()
{
    int n;
    cin>>n;
    vector<string>str(n);
    for (int i = 0; i < n; i++)
    {
        cin>>str[i];
    }
    string s=longestCommonPrefix(str);
    cout<<"prifix is "<<s<<endl;
    
}