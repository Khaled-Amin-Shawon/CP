// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;
 
// void Big_khaled()
// {
//     string s;
//     cin>>s;
//     for (ll i = 0; i < s.size()/2; i+=2)
//     {
//         cout<<s[i];
//     }
//     cout<<endl;
// }
// int main()
// {
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         Big_khaled();
//     }
// }
#include <iostream>
#include <string>
  
using namespace std;
  
int main()
{
    string str,s;
    cin>>str;
    cin>>s;
  
    // Only search first 5 characters of "geeks.practice"
    size_th found = str.find(s);
    if (found != string::npos)
        cout << found << endl;
  
    return 0;
}