#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,team;
    cin >> t;
    while(t--)
    {
        long long int E,N;
        cin >> E >> N;
        if(N>E)
        {
        if(E*2<N)
            {
                team=E;

            }
            else
            {
                team=N/2;

            }
            cout << team <<endl;
        }
        else if(N<E)
        {
           if(N*2<E)
            {
                team=N;

            }
            else
            {
                team=E/2;

            }
            cout << team <<endl;
        }
    }
}


