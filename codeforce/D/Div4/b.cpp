#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tast;
    cin>>tast;
    for ( int k = 0; k < tast; k++)
    {
        int count;
        cin>>count;
        char s1[count],s2[count];
        scanf("%s",s1);
        scanf("%s",s2);
        int r1=0,r2=0,gb1=0,gb2=0,result=0;
        for (int i = 0; i < count; i++)
        {
            if (s1[i]=='R')
            {
                r1++;
                gb1=i;
                //cout<<r1<<s1[i]<<endl;
            }
            
            gb2=1000;
            if (s2[i]=='R')
            {
                r2++;
                gb2=i;
                //cout<<r1<<s1[i]<<endl;
            }
           if (gb1==gb2)
           {
               result++;
           }
        }
        if ((r1==r2)&&(r1==result))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
    
    }
    
}