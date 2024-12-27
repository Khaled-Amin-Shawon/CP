/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;
int FindSingleNumber(int Array[],int n){
    int ans = 0;
    for (int i = 0; i < n; i++){
        ans=ans^Array[i];
    }
        
    return ans;
}
int main(){
    int n;
    cin>>n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    cout<<"single number is "<<FindSingleNumber(array,n)<<endl;
}
/*
################################
        Explaination 
################################

*/