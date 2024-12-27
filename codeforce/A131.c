#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[101];
    gets(str);
    int count = strlen(str);
    int big = 0;
    for (int i = 0; i < count; i++)
    {
        if (str[i] <= 65 && str[i] >= 90)
        {
            big++;
        }
    }
    if (big == count - 1)
    {
        for (int i = 0; i < count; i++)
        {
            printf("%s", str[i]);
        }
    }
    else
    {
        str[0] = toupper(str[0]);
        for (int i = 1; i < count; i++)
        {
            str[i] = tolower(str[i]);
        }
        for (int i = 0; i < count; i++)
        {
            printf("%s",str[i]);
        }
        
    }
}