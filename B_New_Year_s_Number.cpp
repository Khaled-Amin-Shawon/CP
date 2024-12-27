#include <bits/stdc++.h>
using namespace std;
map<long long, int>v;
int find_true(int year)
{
    if (year < 2020)
    {
        v[year] = -1;
        cout<<"year < 2020 -->-1 "<<year<<endl;
        return -1;
    }
    if (v[year] == 1)
    {
        cout<<"v[year] == 1-->"<<year<<endl;
        return 1;
    }
    if (v[year] == -1)
    {
        cout<<"v[year] == -1 -->"<<year<<endl;
        return -1;
    }
    int a = find_true(year - 2020);
    int b = find_true(year - 2021);
    if (a == 1 || b == 1)
    {
        v[year] = 1;
       cout<<year-2020<<" == 1 ||"<<year-2021<<" b == 1 -->"<<year<<endl;
        return 1;
    }
    else
    {
        cout<<year-2020<<" == -1 &&"<<year-2021<<" b == -1 -->"<<year<<endl;
        v[year] = -1;
        return -1;
    }
}
void bigKHALED()
{
    long long year;
    cin >> year;
    int ans = 0;
    ans = find_true(year);
    if (ans==1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bigKHALED();
    }
}