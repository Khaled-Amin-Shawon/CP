/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;
int wordlength(vector<string> word){
    vector<int> bit(word.size());
    int ans=0;
    for (int i = 0; i < word.size(); i++)
    {
        for(auto c : word[i]){
            bit[i] |=(1<<(c-'a'));
        }
        for (int j = 0; j < i; j++)
        {
            if(!(bit[i] & bit[j])) {
                int tamp= word[i].size() * word[j].size();
                ans= max(ans, tamp);
            }
            cout<<endl;
        }
        
    }
    return ans;
    
}
int main()
{
    int n;
    cin>>n;
    vector<string> word(n);
    for (int i = 0; i < n; i++)
    {
        cin>>word[i];
    }
    cout<<"Answer: "<<wordlength(word)<<endl;
}