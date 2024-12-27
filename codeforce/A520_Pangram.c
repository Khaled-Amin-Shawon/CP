#include <stdio.h>
#include <ctype.h>
void selection_short(char a[], int n)
{
    int tamp, pos, j;
    for (int i = 0; i < n - 1; i++)
    {
        pos = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[pos] > a[j])
            {
                pos = j;
            }
        }
        if (pos != i)
        {
            tamp = a[i];
            a[i] = a[pos];
            a[pos] = tamp;
        }
   }
   
}
int main()
{
    int count, result = 0;
    scanf("%d", &count);
    char str[count];
    scanf("%s", str);
    for (int i = 0; i < count; i++)
    {
        str[i] = tolower(str[i]);
    }
    selection_short(str,count);
    for (int i = 0; i < count; i++)
    { 
       
        if (str[i] != str[i + 1])
        {
            result++;
        }
    }
    if (result == 26)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}