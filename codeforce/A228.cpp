#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array[4], result = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (array[i] == array[j])
            {
                result++;
                break;
            }
        }
    }
    cout<<result;
}