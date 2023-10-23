#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Road
{
    int townA, townB, length;
};
// copied gpt
vector<vector<pair<int, int>>> graph; // Adjacency list for the graph
vector<bool> visited;

int DFS(int node, int path_length)
{
    visited[node] = true;
    int max_length = path_length;
    for (const auto &neighbor : graph[node])
    {
        int next_node = neighbor.first;
        int edge_length = neighbor.second;
        if (!visited[next_node])
        {
            int new_length = path_length + edge_length;
            max_length = max(max_length, DFS(next_node, new_length));
        }
    }
    visited[node] = false;
    return max_length;
}

int main()
{
    int N, M;
    cin >> N >> M;

    graph.resize(N + 1); // Graph is 1-indexed
    visited.resize(N + 1, false);

    vector<Road> roads(M);
    for (int i = 0; i < M; ++i)
    {
        cin >> roads[i].townA >> roads[i].townB >> roads[i].length;
        graph[roads[i].townA].emplace_back(roads[i].townB, roads[i].length);
        graph[roads[i].townB].emplace_back(roads[i].townA, roads[i].length);
    }

    int max_total_length = 0;
    for (int town = 1; town <= N; ++town)
    {
        max_total_length = max(max_total_length, DFS(town, 0));
    }

    cout << max_total_length << endl;

    return 0;
}
