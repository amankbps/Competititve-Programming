#include <bits/stdc++.h>
using namespace std;
#define REP(i, x, y) for (long long i = x; i < y; i++)
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define int long long
#define all(x) x.begin(), x.end()
#define INF 2e18
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

void solve()
{
    int n;
    cin >> n;
    vi v(n);
    REP(i, 0, n)
    cin >> v[i];
    map<int, int> m;
    for (auto i : v)
        m[i]++;
    if (m.size() == 1)
    {
        cout << "NO\n";
        return;
    }
    sort(all(v));
    cout << "YES\n";
    cout << v[0] << " ";
    for (int i = n - 1; i > 0; i--)
        cout << v[i] << " ";
    cout << "\n";
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
