#include<iostream>
using namespace std;
main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int T;cin>>T;
	for(;T--;)
	{
		int l,r,x,a,b;
		cin>>l>>r>>x>>a>>b;
		if(a==b)cout<<"0\n";
		else if(abs(a-b)>=x)cout<<"1\n";
		else if(a-l>=x&&b-l>=x||r-a>=x&&r-b>=x)cout<<"2\n";
		else if(a-l>=x&&r-l>=x&&r-b>=x||r-a>=x&&r-l>=x&&b-l>=x)cout<<"3\n";
		else cout<<"-1\n";
	}
}
