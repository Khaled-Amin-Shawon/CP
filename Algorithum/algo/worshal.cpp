#include<bits/stdc++.h>

using namespace std;

#define INF INT_MAX

void Warshall(vector<vector<int>>& graph) 
{
    int V = graph.size();
    vector<vector<int>> dist = graph;

    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (dist[i][k] != INF && dist[k][j] != INF && dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
    cout<<"Output"<<endl;
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (dist[i][j] == INF) {
                cout << "INF ";
            } else {
                cout << dist[i][j] << " ";
            }
        }
        cout << endl;
    }
}

int main() {

    int v,e;
    cin >> v >> e;
    vector<vector<int>> graph(v);
    for (int i = 0; i < v; i++) {
        graph[i].resize(v);
        for (int j = 0; j < v; j++) {
            if (i == j) {
                graph[i][j] = 0;
            } else {
                graph[i][j] = INF;
            }
        }
    }
    for (int i = 0; i < e; i++) {
        int u,v,w;
        cin >> u >> v >> w;
        graph[u][v]=w;
    }

    Warshall(graph);

    return 0;
}
/*
4 7
0 1 3
0 3 7
1 0 8
1 2 2
2 0 5
2 3 1
3 0 2
output 
0 3 5 6 
5 0 2 3 
3 6 0 1 
2 5 7 0 
    */