#include <stdio.h>
int main()
{
    long long int house, task;
    scanf("%lld%lld", &house, &task);
    int array[task];
    for (long long int i = 0; i < task; i++)
    {
        scanf("%lld", &array[i]);
    }
    long long int result = 0,home=1 , remaind=0;
    for (long long int i = 0; i < task; i++)
    {
        if (home<array[i])
        {
            result=result+(array[i]-home);
            home=array[i];
            remaind=house-array[i];
           // printf("%lld =%lld %lld %lld\n",array[i],result,home,remaind);
        }
       else if (home> array[i])
       {    
            result=remaind+result+(array[i]);
            home=array[i];
            remaind=house-array[i];
            // printf("%lld =%lld %lld %lld\n",array[i],result,home,remaind);
       }
       
    }
    printf("%lld", (result));
}