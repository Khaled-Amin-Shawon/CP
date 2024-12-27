#include <stdio.h>
#include <string.h>
int main()
{
    char str[101], srt[101], re[201];
    scanf("%s%s%s", str, srt, re);
    int count = strlen(re);
    int s = strlen(str);
    int k = strlen(srt);
    int result = 0;
   // printf("%d %d %d\n", result, k + s,count);
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < s; j++)
        {

            if (str[j] == re[i])
            {
                result++;
                re[i] = '#';
                str[j] = '@';
               // printf("%d\n", result);
                //puts(re);
            }
        }
    }
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < k; j++)
        {

            if (srt[j] == re[i])
            {
                result++;
                re[i] = '#';
                srt[j] = '@';
                //printf("%d\n", result);
                //puts(re);
            }
        }
    }
    if (count != (k + s))
    {
        printf("NO\n");
    }
    else if (result == (k + s))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}