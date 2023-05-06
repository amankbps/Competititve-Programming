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

void solve()
{
    int n, k;
    cin >> n >> k;
    vi upper(26, 0), lower(26, 0);
    string s;
    cin >> s;
    REP(i, 0, n)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            upper[s[i] - 'a']++;
        else
            lower[s[i] - 'A']++;
    }

    int ans = 0;
    REP(i, 0, 26)
    {
        ans += min(upper[i], lower[i]);

        upper[i] = max(upper[i], lower[i]) - min(upper[i], lower[i]);
    }

    REP(i, 0, 26)
    {
        int cur = upper[i] / 2;
        if (k > cur)
        {
            ans += cur;
            k -= cur;
        }
        else
        {
            ans += k;
            k = 0;
        }
        if (k == 0)
            break;
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
