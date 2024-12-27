#include <stdio.h>
int main()
{
    printf("ax1+bx2=m\ncx1+dx2=n");
    double a, b, c, d, m, n;
    printf("\nInput the value a : ");
    scanf("%lf", &a);
    printf("Input the value b : ");
    scanf("%lf", &b);
    printf("Input the value c : ");
    scanf("%lf", &c);
    printf("Input the value d : ");
    scanf("%lf", &d);
    printf("Input the value m: ");
    scanf("%lf", &m);
    printf("Input the value n : ");
    scanf("%lf", &n);
    double q = a * d - c * b;
    if (q != 0)
    {
        double x1 = (m * d - b * n) / q;
        double x2 = (n * a - m * c) / q;
        printf("\nx1= %lf \nx2= %lf", x1, x2);
    }
    else
        printf("\nad-cd=0, please check it!");
}