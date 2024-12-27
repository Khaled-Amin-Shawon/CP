#include <iostream>
using namespace std;
int main()
{
    int tast;
    cin >> tast;
    for (int k = 0; k < tast; k++)
    {
        long long int num, ans;
        bool result=false;
        cin >> num;
        if (num % 2 != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            /* KHALED AMIN SHAWON */
            for ( long long int i = 2; i < num; i = i * 2)
            {
                ans = num / i;
                if (ans % 2 != 0)
                {
                    cout<<"YES"<<endl;
                    result=true;
                    break;
                }
            }
            if (result==false)
            {
                cout<<"NO"<<endl;
            }
            
        }
    }
}