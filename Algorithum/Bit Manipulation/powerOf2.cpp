#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPowerofTwo(long long n)
    {   if(n == 1) return true;
        int cb = 0;
        while (n)
        {
            if (n & 1) cb++;
            n/=2; 
        }
        if (cb == 1)
            return true;
        else
            return false;
    }
};

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        long long n; 
        cin >> n;
        Solution ob;
        if (ob.isPowerofTwo(n)) 
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }

    return 0;
}