#include <bits/stdc++.h>
using namespace std;

class LRUCache
{
    int maxsize = 0;
    list<int> order;
    unordered_map<int, pair<int, list<int>::iterator>> cache;

    void touch(int id)
    {
        auto it = cache.find(id);
        order.erase(it->second.second);
        order.push_front(it->first);
        it->second.second = order.begin();
    }

public:
    LRUCache(int capacity)
    {

        maxsize = capacity;
        order.clear();
        cache.clear();
    }

    int get(int key)
    {

        if (cache.find(key) == cache.end())
        {
            return -1;
        }

        touch(key);
        return cache[key].first;
    }

    void put(int key, int value)
    {

        if (cache.find(key) == cache.end())
        {
            if (cache.size() == maxsize)
            {
                auto del = order.back();
                cache.erase(del);
                order.pop_back();
            }

            order.push_front(key);
        }
        else
            touch(key);
        cache[key] = make_pair(value, order.begin());
    }
};

vector<int> solve(int N, int Q, vector<vector<int>> operation)
{
    LRUCache *obj = new LRUCache(N);
    vector<int> ans;
    for (auto i : operation)
    {
        if (i[0] == 1)
            ans.push_back(obj->get(i[1]));
        else
        {
            obj->put(i[1], i[2]);
        }
    }
    return ans;
}

int main()
{
    int n, q;
    cin >> n >> q;
    vector<vector<int>> operation;
    for (int i = 0; i < q; i++)
    {
        int type, key, x;
        cin >> type >> key >> x;
        operation.push_back({type, key, x});
    }
    vector<int> ans = solve(n, q, operation);
    for (auto i : ans)
        cout << i << " ";

    return 0;
}
