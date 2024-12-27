#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int m, p, n;
    scanf("%d%d%d", &m, &n, &p);
    if (m == p && p == n && (m>0 && p>0 && n>0))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
