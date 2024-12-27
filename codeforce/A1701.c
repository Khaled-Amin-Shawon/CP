#include<stdio.h>
int main()
{
    int testcase;
    scanf("%d",&testcase);
    for (int  i = 0; i < testcase; i++)
    {
        int a[2],b[2];
        for (int i = 0; i < 2; i++)
        {
            scanf("%d%d",&a[i],&b[i]);
        }
        int move=0;
        for (int i = 0; i <2; i++)
        {
            if (a[i]==1)
            {
                move++;
            }
            if (b[i]==1)
            {
                move++;
            }
            
        }
        if (move==4)
        {
            printf("2\n");
        }
        else if (move==3 || move==2 || move==1)
        {
            printf("1\n");
        }
        else{
            printf("0\n");
        }
        
        
        
    }
    
}