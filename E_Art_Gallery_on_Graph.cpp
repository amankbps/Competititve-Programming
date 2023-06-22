#include <iostream>
#include <vector>
#include <queue>
#include <set>
using namespace std;

set<int> findGuardedVertices(int N, int K, const vector<int> &p, const vector<int> &h, const vector<vector<int>> &graph)
{
    set<int> guardedVertices;

    for (int i = 0; i < K; i++)
    {
        vector<bool> visited(N + 1, false);
        int startVertex = p[i];
        int stamina = h[i];

        queue<pair<int, int>> q;
        q.push({startVertex, stamina});

        while (!q.empty())
        {
            int vertex = q.front().first;
            int remainingStamina = q.front().second;
            q.pop();

            if (remainingStamina < 0 || visited[vertex])
            {
                continue;
            }

            guardedVertices.insert(vertex);
            visited[vertex] = true;

            for (int neighbor : graph[vertex])
            {
                if (!visited[neighbor])
                {
                    q.push({neighbor, remainingStamina - 1});
                }
            }
        }
    }

    return guardedVertices;
}

int main()
{
    int N, M, K;
    cin >> N >> M >> K;
    vector<vector<int>> graph(N + 1);
    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    vector<int> p(K);
    vector<int> h(K);
    for (int i = 0; i < K; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < K; i++)
    {
        cin >> h[i];
    }

    set<int> guardedVertices = findGuardedVertices(N, K, p, h, graph);

    // Output the guarded vertices in ascending order
    for (int vertex : guardedVertices)
    {
        cout << vertex << " ";
    }
    cout << endl;

    return 0;
}
