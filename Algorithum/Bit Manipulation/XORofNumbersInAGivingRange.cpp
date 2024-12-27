/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;

int XORofNumberInAGivingRange(int n){
    if(n%4==0) return n;
    if(n%4==1) return 1;
    if(n%4==2) return n+1;
    if(n%4==3) return 0;
}

int main(){
    int n;
    cin>>n;
    cout<<"Xor of numbers in range "<<n<<" is "<<XORofNumberInAGivingRange(n)<<endl;

}
/*
    N   = answer
    1   =  1
    2   =  3
    3   =  0
    4   =  4

    5   =  1
    6   =  7
    7   =  0
    8   =  8

    

*/