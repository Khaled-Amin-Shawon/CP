#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
bool vis[N];
vector<int> g[N];

void dfs(int vertex)
{
    cout << vertex << endl;
    vis[vertex] = true;
    for (int child : g[vertex])
    {
        cout << "par " << vertex << ", child " << child << endl;
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
    dfs(1);

}/*
6 9
1 2 
1 5 
2 3 
2 4 
2 5 
3 5 
4 5
4 6 
5 6 
*/
