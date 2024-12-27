/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;

vector<int> BruteForce(int n)
{
    vector<int> ans(n + 1, 0);
    for (int i = 0; i <= n; i++)
    {
        int num = i;
        int count = 0;
        while (num)
        {
            count += num % 2;
            num /= 2;
        }
        ans[i] = count;
    }
    return ans;
}
int buildInFunction(int n)
{
    int totalSetBitCount = 0;
    for (int number = 1; number <= n; number++)
    {
        totalSetBitCount += __builtin_popcount(number);
    }
    return totalSetBitCount;
}
vector<int> optimal(int n)
{
    vector<int> ans(n + 1, 0);
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
            ans[i] = ans[i / 2];
        else
            ans[i] = ans[i / 2] + 1;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> result = optimal(n);
    int ans = buildInFunction(n);
    for (int i = 0; i <= n; i++)
    {
        cout << "Answer of " << i << " is " << result[i] << endl;
    }
}