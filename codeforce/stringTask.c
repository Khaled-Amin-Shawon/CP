#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[101];
    scanf(" %s", str);
    int count = strlen(str);
    int a = 0;
    for (int i = 0; i < count; i++)
    {
        str[i] = tolower(str[i]);
        // if (str[i]>=65)
        // {......BIG..KHALED......
        //     // str[i]=97+str[i]-65;
        // }
        // str[count]='\0';
        if (!(str[i] == 'a' || str[i] == 'o' || str[i] == 'y' || str[i] == 'e' || str[i] == 'u' || str[i] == 'i'))

        // if (str[i]!='a' && str[i]!='o' && str[i]!='y' && str[i]!='e' && str[i]!='u' && str[i]!='i')
        {
            printf(".%c", str[i]);
        }
    }
}