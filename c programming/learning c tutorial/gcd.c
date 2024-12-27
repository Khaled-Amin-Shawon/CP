#include<stdio.h>
#include<conio.h>
int main()
{
    int n1, n2;
    printf("Enter the two number\n");
    scanf("%d%d",&n1,&n2);
    int max=(n1>n2)? n1:n2;
    int mim=(n1<n2)? n1:n2;
    for (int i = mim; i > 1; i--)
    {
        if ( max%i==0 && mim%i==0)
        {
          printf("GCD is %d\n",i);
          break;
        }
    }
    getch();
}