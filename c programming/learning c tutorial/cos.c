#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.1416
int main()
{
    int angle=0 ;
    float x,y ;
    printf("Angle    Cos(angle)\n");
    while(angle<=180)
    {
        x=(PI/180)*angle;
        y=cos(x);
        printf("%4d     %2.3f\n",angle,y);
        angle+=15;
    }
getch();
}