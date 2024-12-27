#include <stdio.h>
#include <stdlib.h>
int main()
{
    int age ;
    printf("Wellcome to this programe\n");
    printf("Enter Your Age\n");
    scanf("%d",&age);
    if (age>=18)
    {
        printf(" Your Age is %d \n",age);
        printf("you can use this programe\n");
        for (int i = 0; i < 3; i++)
        {
            int num ;
            printf("\nidentify a single digit number to complite this game\n");
            scanf("%d",&num);
            if (num==0)
            {
               printf("\nyou successfully done that ");
               break;
            }
            else
            {
                printf("\nYou are unsuccessful");
            }
        } 
        
        

    }
    else
    {
        printf("\nYou are not for this game");


    }
    


}