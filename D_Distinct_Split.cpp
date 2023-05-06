#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define REP(i, x, y) for (long long i = x; i < y; i++)
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define INF 2e18
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
/*---------------------------------------------------------------------------------------------------------------------------*/

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vi a(n, 0), b(n, 0);
    set<char> se;
    se.insert(s[0]);
    a[0] = 1;
    REP(i, 1, n)
    {
        se.insert(s[i]);
        a[i] = (int)se.size();
    }
    se.clear();
    se.insert(s[n - 1]);
    b[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        se.insert(s[i]);
        b[i] = (int)se.size();
    }
    int ans = 0;

    for (int i = 0; i < n - 1; i++)
    {
        ans = max(ans, a[i] + b[i + 1]);
    }
    cout << ans << "\n";
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
