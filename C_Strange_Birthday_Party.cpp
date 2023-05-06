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
        int n, m;
        cin >> n >> m;

        vi v(m), v1(n);
        REP(i, 0, n)
        cin >> v1[i];
        REP(i, 0, m)
        cin >> v[i];
        int ans = 0;

        sort(v1.rbegin(), v1.rend());
        int j = 0;
        REP(i, 0, n)
        {
            if (j < m)
            {
                if (v[j] < v[v1[i] - 1])
                    ans += v[j], j++;
                else
                    ans += v[v1[i] - 1];
            }
            else
                ans += v[v1[i] - 1];
        }
        cout << ans << "\n";
    }
    return 0;
}
