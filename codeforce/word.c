#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int sr=strlen(s);
    int countA=0,counta=0;
    for (int i = 0; i < sr; i++)
    {
        if (s[i]<'a')
        {
            countA++;
        }
        else{
            counta++;
        }
    }
    if (countA>counta)
    {
        for (int  i = 0; i < sr; i++)
        {
            s[i]=toupper(s[i]);
        }
        
    }
    if (counta>countA)
    {
        for (int  i = 0; i < sr; i++)
        {
            s[i]=tolower(s[i]);
        }
        
    }
    printf("%s",s);
}