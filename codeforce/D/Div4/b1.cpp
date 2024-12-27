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
           if (s1[i]=='B')
           {
               s1[i]='G';
           }
           if (s2[i]=='B')
           {
               s2[i]='G';
           }
        //    if (s1[i]==s2[i])
        //    {
        //        result++;
        //    }
           
        }
        int a=strcmp(s1,s2);
        if (a==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
    
    }
    
}