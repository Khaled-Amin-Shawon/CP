#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    cout << "hello Khaled" << endl;
    ll num, i;
    cin >> num;
    if (num == 1)
    {
        cout << " 0" << endl;
        return 0;
    }
    else
    {
        for (i = 1; num != 1; i++)
        {
            ll mod = num % 6;
            cout<<mod<<endl;
            if (mod == 4 or mod == 2)
            {
                cout<<"oooooooooooo"<<endl;
                break;
            }
            else if (mod == 0)
                num = num / 6;
            else
                num = num * 2;
            cout << i << " " << num << " " << mod << endl;
        }
    }
    // return i;
}
