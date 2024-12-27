#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a=n/2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
             if(i==a && j==a )
           {
               cout<<"X";
           }
           else if(i==j)
            {
                cout<<'\\';
            }
          
            else if(j+i==n-1){
              cout<<"/";
            }
            else 
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

