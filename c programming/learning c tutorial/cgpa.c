#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("WElcome to CGPA program\n");
    do
    {
        printf("enter the number :");
        scanf("%d",&num); 
        if (num>100 || num<0)
        {
            printf("your input is wrong...please again try\n");
        }
        else if (num>=80 && num<=100)
        {
            printf("you got CGPA 4.00");
            break;
        }
        else if (num>=75 && num<=79)
        {
            printf("you got CGPA 3.75");
            break;
        }
        else if (num>=70 && num<=74)
        {
            printf("you got CGPA 3.50");
            break;
        }
         else if (num>=65 && num<=69)
        {
            printf("you got CGPA 3.25");
            break;
        }
         else if (num>=60 && num<=64)
        {
            printf("you got CGPA 3.00");
            break;
        }
        else if (num>=55 && num<=59)
        {
            printf("you got CGPA 2.75");
            break;
        }
        else if (num>=50 && num<=54)
        {
            printf("you got CGPA 2.50");
            break;
        }
        else if (num>=45 && num<=49)
        {
            printf("you got CGPA 2.25");
            break;
        }
        else if (num>=40 && num<=44)
        {
            printf("you got CGPA 2.00");
            break;
        }
        else
        {
            printf("you are fail in the exam");
            break;
        }
    } while (5);
    getch();
}