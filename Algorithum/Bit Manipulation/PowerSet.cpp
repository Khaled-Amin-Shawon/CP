/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
using namespace std;

vector<vector<int> >powerSets(vector<int>v){
    vector<vector<int> >ans;
    int n=v.size();
    int subset= (1<<n);
    for (int i = 0; i <subset; i++)
    {
        vector<int>temp;
        //cout<<"function is ok "<<n<<" "<<i<<endl;
        for (int j = 0; j < n; j++)
        {
            if(i&(1<<j)) temp.push_back(v[j]);
        }
        ans.push_back(temp);
        //for(auto set : temp)cout<<set<<endl;
        
    }
    return ans;
}

int main(){
    int x;
    cin >> x;
    vector<int>v(x);
    for (int i = 0; i < x; i++)
    {
        cin>>v[i];
    }
    vector<vector<int>>result=powerSets(v);
    cout<<"Number Of powerSet is :"<<result.size()<<endl;
    for(auto set : result){
        for ( auto element : set)
        {
            cout<<element<<" ";
        }
        cout<<endl;
    }
    
}
/*
################################
        Explaination 
################################

*/