#include <stdio.h>
int main()
{
    int a = 5, b = 13;
    // Write code here
    int tamp=a;
    a=b;
    b=tamp;
    // End of code
    printf("%d and %d", a, b);

    return 0;
}