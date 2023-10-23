#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> v(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        v[i] += v[i - 1];
    }

    while (q--)
    {
        int l, r;
        if (l > r)
            swap(l, r);
        cin >> l >> r;
        cout << v[r] - v[l - 1] << "\n";
    }

    return 0;
}