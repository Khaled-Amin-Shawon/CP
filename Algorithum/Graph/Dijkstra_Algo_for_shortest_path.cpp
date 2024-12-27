#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
const int INF = 1e9 + 10;
bool vis[N];
vector<pair<int, int>> g[N];
// vector<int> vis(N, 0);
vector<int> dist(N, INF);

void dijkstra(int source)
{
    set<pair<int, int>> st;
    st.insert({0, source});
    dist[source] = 0;
    while (st.size() > 0)
    {
        auto node = *st.begin();
        int v = node.second;
        int v_dist = node.first;
        st.erase(st.begin());
        if (vis[v])
            continue;
        vis[v] = true;
        for (auto child : g[v])
        {
            int child_v = child.first;
            int wt = child.second;
            if (dist[v] + wt < dist[child_v])
            {
                dist[child_v] = dist[v] + wt;
                st.insert({dist[child_v], child_v});
            }
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    int v1, v2, wt;
    for (int i = 0; i < m; i++)
    {
        cin >> v1 >> v2 >> wt;
        g[v1].push_back({v2, wt});
        g[v2].push_back({v1, wt});
    }
    int source;
    cin >> source;
    dijkstra(source);
    for (int i = 1; i <= n; i++)
    {
        cout << i << " :--> " << dist[i] << endl;
    }
}