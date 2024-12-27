#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count;
    cin >> n >> count;
    char a[n];
    scanf("%s",a);
    for (int i = 0; i < count; i++)
    {
        for (int k = 0; k < n; k++)
        {
            if (a[k] == 'B' && a[k + 1] == 'G')
            {
                a[k] = 'G';
                a[k + 1] = 'B';
                k++;
            }
        }
    }
    puts(a);
}