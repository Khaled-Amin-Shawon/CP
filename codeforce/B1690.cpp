#include <iostream>
using namespace std;
int main()
{
    long long int tast;
    cin >> tast;
    for (int k = 0; k < tast; k++)
    {
        long long int num;
        cin >> num;
        int a[num];
        for (int i = 0; i < num; i++)
        {
            cin >> a[i];
        }
        int b[num];
        for (int i = 0; i < num; i++)
        {
            cin >> b[i];
        }
        int def = 0, ans = 0;
        for (int i = 0; i < num; i++)
        {
            def = max(def, (a[i] - b[i]));
        }
        for (int i = 0; i < num; i++)
        {
            a[i] = a[i] - def;
            if (a[i]<0)
            {
                a[i]=0;
            }
            
            if (a[i] == b[i])
            {
                ans++;
            }
        }
        if (ans == num)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}