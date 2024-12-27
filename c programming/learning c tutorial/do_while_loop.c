#include <stdio.h>
int main()
{
   int num, i=0;
   printf("Enter a number that you want to make table\n");
   scanf("%d", &num);
   printf("%d's Table Is",num);
   do 
   {
       i=i+1;
       printf("\n%d * %d = %d", num,i,(num*i)); 
    

    }while (i<10);
   return 0;


}

