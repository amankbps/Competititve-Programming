#include <iostream>
#include <vector>
#include <unordered_set>

class UnionFind
{
private:
    std::vector<int> parent;
    std::vector<int> rank;
    std::vector<int> size;
    int numComponents;

public:
    UnionFind(int n) : parent(n + 1), rank(n + 1, 0), size(n + 1, 1), numComponents(n)
    {
        for (int i = 1; i <= n; ++i)
        {
            parent[i] = i;
        }
    }

    int find(int x)
    {
        if (parent[x] == x)
        {
            return x;
        }
        return parent[x] = find(parent[x]);
    }

    void unite(int x, int y)
    {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX != rootY)
        {
            if (rank[rootX] < rank[rootY])
            {
                std::swap(rootX, rootY);
            }

            parent[rootY] = rootX;
            size[rootX] += size[rootY];
            if (rank[rootX] == rank[rootY])
            {
                rank[rootX]++;
            }
            numComponents--;
        }
    }

    int getSize(int x)
    {
        int rootX = find(x);
        return size[rootX];
    }

    int countComponents() const
    {
        return numComponents;
    }
};

int main()
{
    int N, Q;
    std::cin >> N >> Q;

    UnionFind uf(N);
    std::unordered_set<int> connectedVertices;

    int isolatedCount = N;

    for (int i = 0; i < Q; ++i)
    {
        int queryType, v;
        std::cin >> queryType >> v;

        if (queryType == 1)
        {
            int u;
            std::cin >> u;
            int rootU = uf.find(u);
            int rootV = uf.find(v);

            if (rootU != rootV)
            {
                if (connectedVertices.count(rootU))
                {
                    connectedVertices.erase(rootU);
                    isolatedCount++;
                }
                if (connectedVertices.count(rootV))
                {
                    connectedVertices.erase(rootV);
                    isolatedCount++;
                }

                uf.unite(rootU, rootV);
                connectedVertices.insert(uf.find(rootU));
                isolatedCount--;
            }
        }
        else
        {
            int rootV = uf.find(v);
            if (!connectedVertices.count(rootV))
            {
                connectedVertices.insert(rootV);
                isolatedCount--;
            }
        }

        std::cout << isolatedCount << std::endl;
    }

    return 0;
}
