#include <stdio.h>
int main()
{
    int count;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        long long int a, b, c, d;
        scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
        long long int ad = a * d, bc = b * c;
        if (ad==0 || bc==0)
            {
                if (ad==0&&bc==0)
                {
                   printf("0\n"); 
                }
                else
                {
                    printf("1\n");
                }
                
            }
        else
        {
            long long int m1 = ad % bc, m2 = bc % ad;

            if (ad == bc)
            {
                printf("0\n");
            }
            else if (m1 == 0 || m2 == 0)
            {
                printf("1\n");
            }
            else
            {
                printf("2\n");
            }
        }
    }
}