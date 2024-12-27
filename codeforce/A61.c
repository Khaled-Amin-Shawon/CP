#include <stdio.h>
#include <string.h>
int main()
{
    char num1[101], num2[101];
    gets(num1);
    gets(num2);
    int y = strlen(num1);
    for (int i = 0; i < y; i++)
    {
        if (num1[i] == num2[i])
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
    }
}