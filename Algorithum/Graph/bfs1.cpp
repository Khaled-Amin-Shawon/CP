#include<bits/stdc++.h>
using namespace std;

const int N =99999;

vector<int> g[N];
bool vis[N];
int level[N];

void bfs(int source){
    queue<int>q;
    q.push(source);
    vis[source]=true;

    while (!q.empty()) 
    {
        int father = q.front();
        q.pop();
        for(int child : g[father]){
            if(!vis[child]){
                q.push(child);
                vis[child]=true;
                level[child]=level[father]+1;
            }
        }
    }
    
}
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    bfs(1);
    for (int i = 0; i < n+1; i++)
    {
        cout<<i<<" level "<<level[i]<<endl;
    }
    
}