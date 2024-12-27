#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    for (int  i = 0; i < test; i++)
    {
        int n;
        scanf("%d",&n);
        char task[n];
        scanf("%s",task);
        char k=task[0];
        int result=0;
        for (int l = 0; l < n; l++)
        {
            if (k!=task[l])
            {
                for (int j = l+1; j <n ; j++)
                {   
                    printf("%s",task[j]);
                    if (k==task[j])
                    {
                        result=6;
                        break;
                    }
                    
                }
                k=task[i];
            }
            
        }
        if (result==6)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    
}