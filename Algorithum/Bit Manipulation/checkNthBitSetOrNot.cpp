/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;

bool chackIthBitSetOrNot(int n, int i){
    if(n&(1<<i)) return true;
    return false;
}

int main(){
    int n,i;
    cin>>n>>i;
    if(chackIthBitSetOrNot(n,i)) cout<<"Bit set at the "<<i<<"th position"<<endl;
    else cout<<"Bit not set at the "<<i<<"th position"<<endl;
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