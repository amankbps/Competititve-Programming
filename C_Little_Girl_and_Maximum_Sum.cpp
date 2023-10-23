
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, q;
    cin >> n >> q;
    long long vec[n + 2]{};
    long long a[n + 2]{};
    long long ans = 0;
    for (long long i = 0; i < n; i++)
    {
        cin >> vec[i];
        // cout << vec[i] << " ";
    }
    sort(vec, vec + n);
    while (q--)
    {
        long long li, ri;
        cin >> li >> ri;
        a[li]++;
        a[ri + 1]--;
    }
    for (int i = 1; i <= n; i++)
    {
        a[i] += a[i - 1];
    }
    sort(a + 1, a + n + 1);
    for (int i = 0; i < n; i++)
    {
        // cout << a[i] << " " << vec[i] << "\n";
        ans += a[i + 1] * vec[i];
    }
    cout << ans << "\n";
    return 0;
}
