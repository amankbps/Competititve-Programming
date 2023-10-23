
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<string, int>> v(n);
    int mini = 2e9, ind = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;

        if (mini > v[i].second)
        {
            mini = v[i].second;
            ind = i;
        }
    }
    for (int i = ind; i < n; i++)
        cout << v[i].first << "\n";

    for (int i = 0; i < ind; i++)
        cout << v[i].first << "\n";

    return 0;
}