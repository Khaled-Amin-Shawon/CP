#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
bool vis[N];
vector<int> g[N];
vector<vector<int>> cc;
vector<int> current_cc;

void dfs(int vertex)
{
    vis[vertex] = true;
    current_cc.push_back(vertex);
    for (int child : g[vertex])
    {
        if (vis[child])
        {
            continue;
        }
        dfs(child);
    }
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
    for (int i = 1; i <= n; i++)
    {
        if (vis[i])
            continue;
        current_cc.clear();
        dfs(i);
        cc.push_back(current_cc);
    }
    cout << cc.size() << endl;
    for (auto c_cc : cc)
    {
        for (int vertex : c_cc)
        {
            cout << vertex << " ";
        }
        cout << endl;
    }

    return 0;
}
/*
8 5
1 2
2 3
2 4
3 5
6 7
*/