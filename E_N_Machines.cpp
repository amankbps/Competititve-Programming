#include <bits/stdc++.h>
using namespace std;

vector<int> freqsort(vector<int> &A)
{
    unordered_map<int, int> count;
    for (int a : A)
        count[a]++;
    sort(begin(A), end(A), [&](int a, int b)
         { return count[a] == count[b] ? a > b : count[a] < count[b]; });
    return A;
}

signed main()
{

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> ans = freqsort(v);
    for (auto i : ans)
        cout << i << " ";
    return 0;
}
