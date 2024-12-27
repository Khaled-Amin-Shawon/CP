#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    for (int k = 0; k < t; k++)
    {
        int a;
        scanf("%d",&a);
        int array[a];
        for (int i = 0; i < a; i++)
        {
            scanf("%d",&array[i]);
        }
        int read=a;
        for (int i = 0; i < a; i++)
        {
            int count=0;
            for (int j = 0; j < a; j++)
            {
                if (array[i]==array[j])
                {
                    count++;
                }
                
            }
            if (count>=3)
            {
                read=0;
                printf("%d\n",array[i]);
                break;
            }

        }
        if (read!=0)
        {
          printf("-1\n");
        }
    }    
}