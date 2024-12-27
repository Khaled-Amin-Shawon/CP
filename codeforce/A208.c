#include <stdio.h>
#include <string.h>
int main()
{
    char str[201];
    scanf("%s", str);
    char *s="WUB";
    char *p;
    p = strtok(str,s );
    while (p != NULL)
    {
        printf("%s ",p);
        p = strtok(NULL, s);
    }
}