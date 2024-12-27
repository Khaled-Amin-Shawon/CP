/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;
int ary[100001];
void sieve()
{
    int n = 100000;
    for (int i = 2; i < n; i++)
    {
        if (ary[i] == 0)
        {
            for (int j = 0; j < n; j += i)
            {
                //cout<<i<<" "<<j<<endl;
                if (ary[j] == 0)
                    ary[j] = i;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    sieve();
    while (n!=1)
    {
        cout<<ary[n]<<" ";
        n=n/ary[n];
    }
    
}