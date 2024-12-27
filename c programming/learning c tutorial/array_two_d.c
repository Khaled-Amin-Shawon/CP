#include <stdio.h>
#include <conio.h>

int main()
{
    int array[3][4]=
    {
        {2,6,9,7},
        { 9,5,6,2},
        {8,3,6,5}
    };
    for (int i =0; i<3; i++)
    {
        for (int j=0; j<4; j++)
        {
            printf("%d",array[i][j]);
            printf("\n");
        }    
    }
    getch();
}