// #include <stdio.h>

// int main()
// {
//     int marks[10], sum=0 ;
//     printf("Enter marks if 10 student :\n\n");
// 	for (int i=0;i<=9,i++)
//     {
//         printf("marks of %d student :", i+1);
//         scanf("%d", &marks[i]);
//         sum += marks[i]
//     }

// 	int average = sum/10;
// 	printf("\nThe average marks of 10 students are %d", average);
// 	return 0;
// }  




// Example for One-dimensional Array :

#include<stdio.h>

int main()
{
	//One dimensional array
	int marks[10], sum=0,i;
	printf("Enter marks of 10 students : \n\n");
	for (int i=0;i<=9;i++)
    {
	    printf( "Marks of %d student : ", i+1);
	    scanf("%d", &marks[i]);
	    sum += marks[i];
    }

	int average = sum/10;
	printf("\nThe average marks of 10 students are %d", average);
	return 0;
}