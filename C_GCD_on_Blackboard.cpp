#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<long long> pref(n + 2, 0);
    vector<long long> suff(n + 2, 0);
    for (int i = 1; i < n + 1; i++)
    {
        pref[i] = __gcd(pref[i - 1], a[i - 1]);
    }
    for (int i = n; i > 0; i--)
    {
        suff[i] = __gcd(suff[i + 1], a[i - 1]);
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans = max(ans, __gcd(pref[i - 1], suff[i + 1]));
    }
    cout << ans << "\n";
    return 0;
}