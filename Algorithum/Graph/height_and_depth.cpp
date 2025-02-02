#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
// bool vis[N];
vector<int> g[N];
int height[N], depth[N];
void dfs(int vertex, int par)
{
    // vis[vertex] = true;
    for (int child : g[vertex])
    {
        if (child == par)
            continue;
        depth[child] = depth[vertex] + 1;
        dfs(child, vertex);
        height[vertex] = max( height[vertex], height[child]+1 );
    }
}
int main()
{
    int n, m;
    cin >> n;
    int v1, v2;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    dfs(1, 0);
    for (int i = 1; i <= n; i++)
    {
        cout << "FOR node " << i << " depth " << depth[i] << " height " << height[i] << endl;
    }
}