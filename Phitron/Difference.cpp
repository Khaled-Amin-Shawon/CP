#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int m,p;
    scanf("%d%d",&m,&p);
    if (m>=p)
    {
         printf("%d\n",(m-p));
    }
    else
    {
         printf("%d\n",(p-m));
    }
    
    
   

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

