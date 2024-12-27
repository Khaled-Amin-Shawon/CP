#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	bool condi=false;
	for (int i = 0; i < s.size()/2; ++i)
	{
		if (s[i]==s[s.size()-1-i])
		{
			condi=true;
		}
        else condi=false;
	}
	if (condi==true)
	{
		cout<<"Palindrome"<<endl;
	}
	else cout<<"Vag vosrike"<<endl;

}