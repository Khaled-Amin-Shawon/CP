/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;
int countTallingZero(int n)
{
    int ans = 0;
    while (!(n&1))
    {
        n=n>>1;
        ans++;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << "Answer: " << countTallingZero(n) << endl;
}