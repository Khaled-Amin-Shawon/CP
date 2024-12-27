#include <bits/stdc++.h>
using namespace std;
long long ans(int day)
{
    return (day * (day - 1)) / 2;
}
void solve()
{
    long long n, k, d;
    cin >> n >> k >> d;
    vector<long long> v(n);
    long long day = 0, away = 0;
    bool t = true;

    for (long long i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] <= d)
        {
            day++;
            if(day>=k){
                away=away+day-k+1;
            }
            t = true;
        }
        //cout << v[i] << " " << day << " ";
        if (v[i] > d)
        {
            day = 0;
            t = false;
        }
       // cout << away << endl;
    }
    
    cout << away << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}