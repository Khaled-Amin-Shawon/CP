#include <stdio.h>
// void shortarray(int array[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//        int  min=array[i],pos=i;
//         for (int j = i; j < n; j++)
//         {
//             if (min>array[j])
//             {
//                 min=array[j];
//                 array[j]=array[i];
//                 array[i]=min;
//             }
            
//         }
//      printf("%d",array[])   
//     }
    
    
// }
int main()
{
    int count,rem =0;
    scanf("%d", &count);
    int exit[count], enter[count], atten[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d%d", &exit[i], &enter[i]);
        atten[i] =rem+ enter[i] - exit[i];
        rem=atten[i];
       // printf("%d - %d =%d\n",enter[i],exit[i],atten[i]);
    }
    // shortarray(atten, count);
    // printf("%d", atten[count - 1]);
    int result=atten[0];
    for (int i = 1; i < count; i++)
    {
        if (result<atten[i])
        {
            result=atten[i];
        }
        
    }
    printf("%d",result);
}