#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>> num; 
    int untreat=0,police=0;
    for (int i = 0; i < num; i++)
    {
       int  crime;
       cin>>crime;
       if(crime>0) police+=crime;
       else
       {
           if(police<1) untreat++;
           else police--;
       }
       
    }
    cout<<untreat<<endl;
}