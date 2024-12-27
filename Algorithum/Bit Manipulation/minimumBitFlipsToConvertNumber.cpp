/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;

int MyNumberofFlipsTheBit(int a, int b){
    int count = 0;
    for (int i = 0; i < 31; i++)
    {
        if((a&(1<<i))!=(b&(1<<i))) count++;
    }
    return count;
}
int YouTubeNumberofFlipsTheBit(int a, int b){
    int count = 0;
    int ans=a^b;
    for (int i = 0; i < 31; i++)
    {
        if((ans&(1<<i))) count++;
    }
    return count;
}

int main(){
    int a, b;
    cin >> a >> b ;
    cout<<"result: "<<YouTubeNumberofFlipsTheBit(a,b)<<endl;
}
/*
################################
        Explaination 
################################

*/