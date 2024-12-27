#include <stdio.h>
#include<conio.h>
int main()
{
   int num, i=1;
   printf("Enter a number that you want to make table\n");
   scanf("%d", &num);
   printf("%d's Table Is\n",num);
   for (i;i<=10;i++)
   {
      printf("%d * %d = %d\n",num,i,(num*i));
   }
   getch();
}

