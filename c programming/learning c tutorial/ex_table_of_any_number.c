#include <stdio.h>
//creating multiplication table 

int main()
{
    int a,i;
    printf("\aEnter the number for create a multiplicatoin table of \n");
    scanf("%d",&a);
    printf("\n %d number of table\n",a);
    //make a function of table
    for(i=1; i<=10; i++)
    {
        printf("\n%d*%d=%d\a",a,i,(a*i));
        
    }
    
    return 0;
}