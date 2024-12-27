/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(!(n&(n-1))) cout<<"The number "<<n<<" have only set bit"<<endl;
    else cout<<"The number "<<n<<" have multipul set bit"<<endl;
    
}