#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    int testCase;
    scanf("%d",&testCase);
    for (int i = 0; i < testCase; i++)
    {
        char yes[4];
        scanf("%s",yes);
        for ( int j = 0; j <3; j++)
        {
            yes[j]=tolower(yes[j]);
        }
        if (yes[0]=='y' && yes[1]=='e' && yes[2]=='s')
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
        

    }
    
}