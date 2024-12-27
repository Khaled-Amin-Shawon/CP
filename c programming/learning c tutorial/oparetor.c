#include <stdio.h>


int main(void)
{
    /* code */
    int a , b;
    printf("enter the value of a \n");
    scanf("%d",&a);

    printf("enter the value of b \n");
    scanf("%d",&b);
    //oparetor of this programe
    printf("the result of a + b = %d \n", a + b);
    printf("the result of a - b = %d \n", a - b);
    printf("the result of a * b = %d \n", a * b);
    printf("the result of a / b = %d \n", a / b);
    printf("the result of a || b = %d \n", a || b);
    printf("the result of a && b = %d \n", a && b);
    printf("the result of a == b = %d \n", a == b);
    printf("the result of a % b = %d \n", a % b);
    printf("the result of a & b = %d \n", a & b);
    printf("the result of a | b = %d \n", a | b);
    return 1;
}