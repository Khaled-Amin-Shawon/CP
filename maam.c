#include <stdio.h>
#include <string.h>
void copy_S_in_another(char s1[100], char s2[100])
{
    //strcpy(s1, s2);
    int k=strlen(s1);
    for (int i = 0; i <k; i++)
    {
        s2[i]=s1[i];
    }
    s2[k]='\0';
    
}
void cat_one_s_in_lAst(char s1[100], char s2[100])
{
    //strcat(s1, s2);
    int k=strlen(s1);
    int l=strlen(s2);
    s1[k]='a';s1[k+1]='a';
    for (int i = k; i <l; i++)
    {
        s1[k+i]=s2[i];
        printf("%c %c \n",s1[k+i],s2[i]);
    }
    s1[k+l]='\0';
}
void comp_two_s(char s1[100], char s2[100])
{
    int r = strcmp(s1, s2);
    if (r == 0)
        printf("Both string is same \n");
    else if (r == -1)
    {
        printf("1st string come first in dictionary order \n");
    }
    else
    {
        printf("2nd string come first in dictionary order \n");
    }
}
int main()
{
    char s1[100];
    char s2[200];
    scanf("%s %s", s1, s2);
    comp_two_s(s1,s2);
    copy_S_in_another(s1, s2);
    printf("%s %s\n", s1, s2);
    cat_one_s_in_lAst(s1, s2);
    printf("%s %s\n", s1, s2);
}