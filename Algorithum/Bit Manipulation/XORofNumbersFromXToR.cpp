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
    int x,y;
    cin>>x>>y;
    int ans =(XORofNumberInAGivingRange(x-1))^(XORofNumberInAGivingRange(y));
    cout<<"Xor of numbers from "<<x<<" to "<<y<<" is "<<ans<<endl;
}
/*
################################
        Explaination 
################################
    range of numbers 4 to 7
    (1^2^3)^(1^2^3^4^5^6^7)
    1^1=0
    2^2=0
    3^3=0
    0^x=x
    so (0^4^5^6^7)= answer

*/