/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str ="";
    while (n)
    {
        int rem= n%26;
        if(rem==0) {
            str ="Z"+str;
            n/=26-1;
        }
        else{
            char c ='A' + rem -1;
            str= c+str;
            n/=26;
        }
    }
    cout<<str<<endl;
    
}