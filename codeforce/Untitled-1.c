#include<stdio.h>
#include<string.h>
int main()
{
   char s[100];
   scanf("%s",s);
   int c_0=0,c_1=0;
   int sr = strlen(s);
   for (int  i = 0; i < sr; i++)
   {
       if (s[i]=='0')
       {
        c_0++;
        c_1=0;
       }
       if (s[i]=='1')
       {
        c_1++;
        c_0=0;
       }
       if (c_0>=7 || c_1>=7)
       {
         break;
       }
       
   }
   if (c_0>=7 || c_1>=7)
   {
    printf("YES");
   }
   else{
    printf("NO");
   }
   
}