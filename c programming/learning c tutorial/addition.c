#include <stdio.h>
#include <stdlib.h>
int sum(int , int);//function declaration or prototype
int main()
{
    int num1,num2,total;//variable declaration
    printf("Enter the two number ");
    scanf("%d %d",&num1,&num2);//getting two number as input from user
    total=sum(num1,num2);//calling the function
    //The total value (returned by the function) is stored in total variable.
    printf("The sum of these numbers :%d",total);
    //display the total value
    getch();
    return 0;
}
int sum(int a, int b)//defining function based in declaration
{
    int result=a+b;//find sum of two numbers
    //and result of sum stored in result variable
    return result;//returning result
}