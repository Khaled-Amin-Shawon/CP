#include <bits/stdc++.h>
using namespace std;
int main()
{
    char set[10001];
    gets(set);
    int y = strlen(set);
    int result = 1;
    for (int i = 1; i < y; i += 3)
    {
        char temp = set[i];
        for (int j = i; j < y; j += 3)
        {
            if (set[j] == "0")
            {
            }
            else
            {
                if (temp == set[j])
                {
                    set[j] = "0";
                }
            }
        }
    }
    cout << result << endl;
}