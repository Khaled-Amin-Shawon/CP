#include<stdio.h>
#include<conio.h>
int main()
{

    int a ,sum=0;
    scanf("%d",&a);
        int array[a];
        array[0]=0;
    for(int i=1;i<=a;i++)
    {
        if(i%2==0){
            array[i]=i;
       // printf("Even\t:\t%d\n",i);
        }
         if(i%2!=0){
             array[i]=i;
        //printf("Odd\t:\t%d\n",i);
        }
           
    }
    
     for(int i=1;i<=a;i++)
            {
                if(i%2==0)       printf("%d ",array[i]);
            }
            printf("\n");
    for(int i=1;i<=a;i++)
            {
                if(i%2!=0)       printf("%d ",array[i]);
            }
    
    
    

    getch();
    return 0;
}