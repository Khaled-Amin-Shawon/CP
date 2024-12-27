/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;

void SingleNumber(vector<int>v, int* one, int* two) {
    long XOR = 0;
    for (int i = 0; i < v.size(); i++)
    {
        XOR=XOR^v[i];
    }
    int MostLeftSetBit=(XOR & (XOR-1))^ XOR ;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i]&MostLeftSetBit) *one=*one^v[i]; 
        else *two=*two^v[i];

    }
}
int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int one =0,two=0;
    SingleNumber(v,&one,&two);
    cout<<"The single number are "<<one<<" and "<<two<<endl;

}


/*
################################
        Explaination 
################################
    7=  1 1 1 
    3=  0 1 1
    xor=1 
*/