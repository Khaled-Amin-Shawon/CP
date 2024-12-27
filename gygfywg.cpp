#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main()
{ 
   string s;
   cin>>s;
   vector<char>c;
   map<char,int>cnt;
   for (int i = 0; i < s.length(); i++)
   {
      c.push_back(s[i]);
   }
   
   for (int i = 0; i < c.size(); i++)
   {
      cnt[c[i]]++;
   }
   for (auto u : cnt)
   {
      cout<<u.first<<u.second<<endl;
   }
   map<int,char>k;
   for (auto u : cnt)
   {
      k[u.second]=u.first;
   }
   for (auto u : k)
   {
      cout<<u.first<<u.second<<endl;
   }
   
   
   

   
    
}