/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;

int TotalSumOfAllPairsXOR(){
    int n;
    cin>>n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    int ans = 0;
    for (int i = 0; i < 31; i++)
    {
        int one=0,zero=0;
        for (int j = 0; j < n; j++)
        {
            if (array[j]&(1<<i)) one++;
            else zero++;
        }
        int p=one*zero;
        ans+=(1<<i)*p;
    }
    return ans;
}

int main(){
    int ans=TotalSumOfAllPairsXOR();
    cout<<"Total sum of all pairs : "<<ans<<endl;
}