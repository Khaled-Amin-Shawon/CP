/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;

int SingleNumber(vector<int>v){
    int one =0, two =0;
    for (int i = 0; i < v.size(); i++)
    {
        one=(one^v[i])&(~two);
        two=(two^v[i])&(~one);
    }
    
    return one;
}
int main(){
    int a,b;
    cin>>a>>b;
    int c= a^b;
    int d=(c&c-1)&c;
    cout<<c<<" "<<d;

    
    

}


/*
################################
        Explaination 
################################

*/