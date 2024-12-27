/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;

int SetIthBit(int n, int i){
    return(n|(1<<i));
}

int main(){
    int n,i;
    cin>>n>>i;
    if(n&(1<<i))cout<<"Befor : "<<1<<endl; else cout<<"Befor : "<<0<<endl; 
    n=SetIthBit(n,i);
    if(n&(1<<i))cout<<"After : "<<1<<endl; else cout<<"After : "<<0<<endl; 
}
/*
################################
        Explaination 
################################


*/