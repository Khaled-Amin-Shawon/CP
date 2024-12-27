#include<stdio.h>
int main()
{
    int s,n;
    scanf("%d%d",&s,&n);
    int d[n],ds[n];
    for(int i=0;i<n;i++)
    {
        
    }
    int *b=d;
    for(int i=0;i<n;i++)
    {
        int *a=min_element(d,d+n);
        if(*a<s)
        {
            s=s+ds[a-b];
            *a=INT32_MAX;
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }

    }
    cout<<"YES"<<endl;
    return 0;

}
