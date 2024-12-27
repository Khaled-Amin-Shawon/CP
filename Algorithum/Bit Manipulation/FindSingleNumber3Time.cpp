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
    sort(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++)
    {
        one=(one^v[i])&(~two);
        two=(two^v[i])&(~one);
    }
    
    return one;
}
int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int ans = SingleNumber(v);
    cout<<"The single number is "<<ans<<endl;

}


/*
################################
        Explaination 
################################

*/