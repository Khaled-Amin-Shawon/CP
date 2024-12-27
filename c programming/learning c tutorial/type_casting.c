#include<stdio.h>
#include<conio.h>
int main()
{
   int x=7, y=5;
    float z;
    z = (float)x/(float)y;   /*Here the value of z is 1.4*/
    for(x=97; x<=122; x++)
    {
        printf("%c", (char)x);   /*Explicit casting from int to char*/
    } 
   getch();
}
// main()
// {
//     int x=7, y=5 ;
//     float z;
//     z=x/y; /*Here the value of z is 1*/
//     getch();
// }


