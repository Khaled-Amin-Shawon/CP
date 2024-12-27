#include<stdio.h>
int main()
{
    char name[101];
    scanf("%s",name);
    int count=0;
    for(char i ='a'; i<='z'; i++)
    {
        for(int j=0; name[j]!='\0'; j++)
        {
            if(name[j]==i)
            {
                count++;
                break;
            }
        }
    }

    if(count%2!=0)
        printf("IGNORE HIM!\n");
    else
        printf("CHAT WITH HER!\n");

 
}