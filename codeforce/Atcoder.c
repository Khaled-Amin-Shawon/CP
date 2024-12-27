#include <stdio.h>
int main()
{
    int row, colum;
    scanf("%d%d", &row, &colum);
    if (row == 1 || row == 15 || colum == 1 || colum == 1)
    {
        printf("black\n");
    }
    else if ((row == 3 || row == 13) && (colum != 2 || colum != 14))
    {
        printf("black\n");
    }
    else if ((row == 5 || row == 11) && (colum != 2 || colum != 14 || colum != 4 || colum != 12))
    {
        printf("black\n");
    }
    else if ((row == 7 || row == 9) && (colum != 2 || colum != 14 || colum != 4 || colum != 12 || colum != 6 || colum != 10))
    {
        printf("black\n");
    }
    else if ((row == 8) && (colum != 2 || colum != 14 || colum != 4 || colum != 12 || colum != 6 || colum != 10 || colum != 8))
    {
        printf("black\n");
    }
    else
    {
        printf("white\n");
    }
}