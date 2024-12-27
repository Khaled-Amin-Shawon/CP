#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tast;
    cin >> tast;
    for (int k = 0; k < tast; k++)
    {
        int count;
        cin >> count;
        char s[count];
        scanf("%s", s);
        int y = strlen(s);
        if ( count==5)
        {
            int sT, si, sm, su, sr;
            for (int i = 0; i < count; i++)
            {
                if (s[i] == 'T')
                {
                    sT = 1;
                }
                if (s[i] == 'i')
                {
                    si = 1;
                }
                if (s[i] == 'm')
                {
                    sm = 1;
                }
                if (s[i] == 'u')
                {
                    su = 1;
                }
                if (s[i] == 'r')
                {
                    sr = 1;
                }
            }
            // int result =
            // cout<<result<<"\t"<<T<<endl;
            if ((sT + si + sm + su + sr) == 5)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
            sT = 0;
            si = 0;
            sm = 0;
            su = 0;
            sr = 0;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}