/*
||-----------------------------------||
||       Khaled  Amin  Shawon        ||
||         Big Khaled code           ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
using namespace std;

typedef pair<int, int> pii;

void dijkstra(int src, const vector<vector<pii>> &adj, vector<int> &dist) {

    priority_queue<pii, vector<pii>, greater<pii>> pq;
    
    pq.push(make_pair(0, src));
    dist[src] = 0;
    
    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        
        for (auto &neighbor : adj[u]) {
            int v = neighbor.first;
            int weight = neighbor.second;
            
            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }
}

int main() {
    int V , E; 
    cin >> V >> E;
    V++;
    vector<vector<pii>> adj(V);
    // Add edges to the adjacency list (vertex, weight)
    for (int i =0 ; i < E; i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back(make_pair(v, w));
    }
    
    vector<int> dist(V, INT_MAX);
    int src ;
    cin >>src;
    dijkstra(src, adj, dist);
    
    // Print the shortest distances from the source
    cout << "Vertex   Distance from Source" << endl;
    for (int i = 1; i < V; i++) {
        cout << i << " \t\t " << dist[i] << endl;
    }
    
    return 0;
}
/*
6 9
1 2 1
1 5 3
2 3 2
2 4 2
2 5 1
3 5 2
4 5 3
4 6 1
5 6 2
1 
*/
