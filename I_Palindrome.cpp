#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x;
    deque<int> dq, dq1, dq2;
    while (n > 0)
    {
        x = n % 10;
        dq.push_front(x);
        n /= 10;
    }
    dq1 = dq;

    bool a = true;
    while (!dq.empty())
    {
        int m = dq.front();
        int n = dq.back();
        if (dq.size() == 1)
        {
            break;
        }
        if (m != n)
        {
            a = false;
            break;
        }
        dq.pop_back();
        dq.pop_front();
    }

    if (a == true)
    {
        while (!dq1.empty())
        {
            int m;
            m = dq1.back();
            dq2.push_back(m);
            dq1.pop_back();
        }
        int l = 0;
        while (!dq2.empty())
        {
            int x = dq2.front();
            if (x == 0 && l == 0)
            {
                dq2.pop_front();
            }
            else
            {
                cout << x;
                l++;
                dq2.pop_front();
            }
        }

        cout << endl
             << "YES" << endl;
    }
    else
    {
        while (!dq1.empty())
        {
            int m;
            m = dq1.back();
            dq2.push_back(m);
            dq1.pop_back();
        }
        int l = 0;
        while (!dq2.empty())
        {
            int x = dq2.front();
            if (x == 0 && l == 0)
            {
                dq2.pop_front();
            }
            else
            {
                cout << x;
                dq2.pop_front();
                l++;
            }
        }
        cout << endl
             << "NO" << endl;
    }
}