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
#define INF 1e18
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int x, y;
        vi v(n);
        int ans = 0;
        REP(i, 0, n)
        {
            cin >> x >> y;
            ans += min(x, y);
            v[i] = max(x, y);
        }
        sort(all(v));
        ans <<= 1;
        ans += v[0] + v[n - 1];
        for (int i = 1; i < n; i++)
            ans += (v[i] - v[i - 1]);
        cout << ans << "\n";
    }
    return 0;
}