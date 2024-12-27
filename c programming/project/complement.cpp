#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> a;
    long long int number;
    cin >> number;
    while (number != 0)
    {
        int tamp = number % 10;
        number /= 10;
        v.push_back(tamp);
    }
    reverse(v.begin(), v.end());
    cout << "Befor Complement" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 1)
            a.push_back(0);
        else
            a.push_back(1);
    }
    cout << "After 1's complement" << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << " ";
    }
    cout << endl;
    int i = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 1)
        {
            for (int j = i + 1; j < v.size(); j++)
            {
                if (v[j] == 1)
                    v[j]=0;
                else
                    v[j]=1;
            }
            break;
        }
    }
    cout << "After 2's complement" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
}