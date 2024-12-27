#include<stdio.h>
int main()
{
    int c=0,count;
    char s[10];
    scanf("%d",&count);
    for (int i = 0; i < count; i++)
    {
        scanf("%s",s);
       if ( (s[0]=='-'&&s[1]=='-') || (s[1]=='-'&&s[2]=='-')) c--;
       if ( (s[0]=='+'&&s[1]=='+') || (s[1]=='+'&&s[2]=='+')) c++;
        
    }
    printf("%d",c);
}
