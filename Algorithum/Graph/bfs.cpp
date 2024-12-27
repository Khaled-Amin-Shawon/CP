//Tnis is BigKhaled
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
bool vis[N];
vector<int> g[N];
int level[N];

void bfs(int vertex)
{
    queue<int>q;
    q.push(vertex);
    vis[vertex]=true;
    while (!q.empty())
    {
        int cur_v=q.front();
        q.pop();
        cout<<cur_v<<" ";
        for(int child : g[cur_v])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child]=true;
                level[child]=level[cur_v]+1;
            }
        }
    }
    cout<<endl;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int v1, v2;
    for (int i = 0; i < m; i++)
    {
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    } 
    bfs(1);
    for (int i = 1; i <= n; i++)
    {
        cout<<i<<" :--> "<<level[i]<<endl;
    }
}