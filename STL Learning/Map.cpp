#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main()
{
    map<string,int>mapTest;
    mapTest["Khaled"]=98;
    mapTest["ripa"]=59;
    mapTest["sabbir"]=02;
    mapTest["Hazera"]=96;
    mapTest["Borsa"]=93;
    mapTest["Sadika"]=90;
    map<string,int> :: iterator it;
    for(it=mapTest.begin();it!=mapTest.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    cout<<mapTest.empty()<<endl;
    // cout<<mapTest.clear()<<endl;
    cout<<mapTest.empty()<<endl;
    cout<<mapTest.size()<<endl;
    cout<<mapTest.max_size()<<endl;
    
}