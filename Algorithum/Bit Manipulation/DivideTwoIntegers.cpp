/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;
int division(int dividend, int divisor){
    if(dividend ==divisor)return 1;
    bool sign =true;
    if(dividend<=0 && divisor>0) sign =false; 
    if(dividend>=0 && divisor<0) sign =false; 
    long n=abs(dividend);
    long d=abs(divisor);
    long ans=0;
    while (n>=d)
    {
        int count =0;
        while (n>=(d<<(count+1)))
        {
            count++;   
        }
        ans+=1<<count;
        n-=(d<<count);
        
    }
    if(ans==(1<<31)&&sign) return INT32_MAX;
    if(ans==(1<<31)&&!sign) return INT32_MIN;
    return sign ? ans : -ans;
    
}

int main(){
    int n,d;
    cin>>n>>d;
    cout<<"result is : "<<division(n,d)<<endl;

}
/*
################################
        Explaination 
################################
    

*/