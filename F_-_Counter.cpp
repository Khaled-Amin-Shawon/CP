#include <bits/stdc++.h>
using namespace std;
#include <string.h>
int main()
{
    string str1, str2;
    int l, i, j;
    cin >> str1 >> str2;

    int count = 0;
    for (i = 0, j = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == str2[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
        if (str2.size() == j)
        {
            j = 0;
            count++;
            // printf("Substring found at position %d\n", i - j + 1);
        }
    }
    if (count > 0)
    {
        printf("%d\n", count);
    }
    return 0;
}