#include <stdio.h>
#define ll long long int

int main()
{
    int N;
    scanf("%d", &N);
    int a[N][N], b[N][N], c[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            c[i][j] = 0;

            for (int k = 0; k < N; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }

            printf("%d\t", c[i][j]);
        }

        printf("\n");
    }
}

// for (int i = 0; i < N; i++)
// {
//     for (int j = 0; j < N; j++)
//     {
//         printf("%d ", c[i][j]);
//     }
//     printf("\n");
// }
// }