#include <stdio.h>
#include <conio.h>
int main()
{ 

    char science, mathematics;
    printf("If you pass this subject then say y or fail this subject then say n\n");
    printf("Mathematics = ");
    scanf(" %s",&mathematics);
    printf("Science = ");
    scanf(" %s",&science);


    // printf("mathematics = \n");
    // scanf("%s",&mathematics);

    // printf("\nvarify the information \n science= %s \n mathametic= %s",science,mathematics);
  
    if ((mathematics=='y') && (science=='y'))
    {
        printf("\nyou got 50 taka as a reward for passing in both subject");
    }
    else if ((mathematics=='y') && (science=='n'))
    {
        printf("\nyou got 25taka as a reward for passing in Mathematics subject");
    }
    else if ((mathematics=='n') && (science=='y'))
    {
        printf("\nyou got 25taka as a reward for passing in Science subject");
    }
    else
        printf("sorry you got nothing");
 getch();
}
