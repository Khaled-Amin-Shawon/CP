#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int path[N];
bool vis[N];
vector<int> g[N];
void dfs(int vertex)
{
    cout << vertex << endl;
    vis[vertex]=true;
    for (int child : g[vertex])
    {
        cout << "par " << vertex << ", child " << child << endl;
        if (vis[child]==false)
        {
            path[child] = path[vertex] + 1;
            dfs(child);
        }
    }
}
int main()
{
    int v, e;
    cin >> v >> e;
    for (int i = 0; i < e; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    int source;
    cin>>source;
    dfs(source);
    for (int i = 1; i < v; i++)
    {
       cout<<i<<" path --> "<<path[i]<<endl;
    }
    
}