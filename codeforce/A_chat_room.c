#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int count =strlen(s);
    char k[]="hello";
    int j=0;
    for (int i = 0; i < count; i++)
    {
        if (s[i]==k[j])
        {
            j++;
           
        }
      
        /*
        Big Khaled.......
        */
    }
    if (j==5)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
}