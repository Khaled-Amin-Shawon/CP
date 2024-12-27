#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll table[100005];
ll masure[100005];
int main()
{
	int n,m=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		masure[a[i]]++;
		m=max(m,a[i]);
	} 
	// BIG KHALED
	table[1]=masure[1];
	for(int i=2;i<=m;i++){
		table[i] = max((table[i-2]+(masure[i]*i)),table[i-1]);
	}
	cout<<table[m];

	return 0;
}