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
#define sz(x) (int)x.size()
#define INF 2e18
typedef long long ll;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);

    REP(i, 0, n)
    cin >> v[i];

    if (v[n - 1] == 0)
    {
        cout << "YES\n";
        int i = n - 1;
        while (i >= 0)
        {
            int j = i;
            int k = 0;
            int cnt = 0;
            while (j >= 0 && k <= v[j])
            {
                k = v[j];
                cnt += v[j];
                j -= 1;
            }
            for (int k = j + 1; k < i; k++)
            {
                cout << "0 ";
            }
            cout << cnt << " ";
            i = j;
        }
        cout << "\n";
    }
    else
        cout << "NO\n";
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
