import sys

class ShortestPathFinder:
    def __init__(self, num_vertices):
        self.num_vertices = num_vertices
        self.graph = [[float('inf')]*num_vertices for _ in range(num_vertices)]

    def add_edge(self, start, end, weight):
        self.graph[start][end] = weight

    def floyd_warshall(self):
        dist = self.graph.copy()

        for k in range(self.num_vertices):
            for i in range(self.num_vertices):
                for j in range(self.num_vertices):
                    if dist[i][k] + dist[k][j] < dist[i][j]:
                        dist[i][j] = dist[i][k] + dist[k][j]

        return dist

def main():
    num_vertices = 4
    path_finder = ShortestPathFinder(num_vertices)

    # Add edges with weights
    path_finder.add_edge(0, 1, 5)
    path_finder.add_edge(0, 2, 10)
    path_finder.add_edge(1, 2, 3)
    path_finder.add_edge(2, 3, 1)

    # Find shortest paths
    shortest_paths = path_finder.floyd_warshall()

    # Display the result
    for i in range(num_vertices):
        for j in range(num_vertices):
            print(f"Shortest path from {i} to {j}: {shortest_paths[i][j]}")

if __name__ == "__main__":
    main()
