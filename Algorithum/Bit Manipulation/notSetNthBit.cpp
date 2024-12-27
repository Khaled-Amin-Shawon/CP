/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;

int NotSetIthBit(int n, int i){
    return(n&~(1<<i));
}

int main(){
    int n,i;
    cin>>n>>i;
    if(n&(1<<i))cout<<"Befor : "<<1<<endl; else cout<<"Befor : "<<0<<endl; 
    n=NotSetIthBit(n,i);
    if(n&(1<<i))cout<<"After : "<<1<<endl; else cout<<"After : "<<0<<endl; 
}
/*
################################
        Explaination 
################################
    n=7 and i=2
    7  binary   =  1 1 1
    bit position = 2 1 0
    And operation (0 & 1) =0 0r (0&0)=0 or(1 & 1)=1
    when
    (1 1 1)&(1<<2)=(1 1 1)&(1 0 0)=(1 0 0)

*/