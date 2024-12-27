#include <stdio.h>
#include<conio.h>

int main()
{
    int a;
    char c;
   
    printf("what you want to print\n");
    scanf("%s",&c);
    printf("how many time you want this");
    scanf("%d",&a);
    for(int i=0; i<=a; i++)
    {
        printf("%s\n",c);

    }
    getch();
}