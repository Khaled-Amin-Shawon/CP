#include <stdio.h>
#include <string.h>
int main()
{
    char str[51];
    int result = 0;
    scanf("%s", str);
    int count = strlen(str);
    for (int i = 0; i < count; i++)
    {
        if (str[i] == 'a')
        {
            result++;
        }
    }
    result = result * 2 - 1;
    if (result >= (count))
    {
        printf("%d", count);
    }
    else
    {
        printf("%d", result);
    }
}