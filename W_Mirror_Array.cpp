#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int array[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> array[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = m-1; j >=0; j--)
        {
            cout<< array[i][j]<<" ";
        }
        cout<<"\n";
    }
    
}