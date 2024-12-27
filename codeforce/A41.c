#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    // char t[101];
    gets(s);
    // gets(t);
    int count = strlen(s), k = 0;
    for (int i = 0; i < count; i++)
    {
        if (s[i] == 'H' || s[i]== 'Q' || s[i] == '9' || s[i] == '+')
        {
            printf("YES");
            k = 52;
            break;
        }
        else
        {
            k = 96;
        }
    }
    if (k == 96)
    {
        printf("NO");
    }
}