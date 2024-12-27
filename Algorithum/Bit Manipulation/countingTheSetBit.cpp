/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;
int countSetBit(int n)
{
    int ans = 0;
    while (n)
    {
        n =( n & (n - 1));
        ans++;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << "Answer: " << countSetBit(n) << endl;
}