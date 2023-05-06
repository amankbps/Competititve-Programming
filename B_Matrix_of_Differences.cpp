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
    vector<vector<int>> ans;

    int c = n * n - 1;
    vi temp;
    temp.eb(1);
    for (int i = 2; i <= n * n; i++)
    {

        if (i % 2 == 0)
        {
            temp.eb(temp.back() + c);
            c--;
        }
        else
        {
            temp.eb(temp.back() - c);
            c--;
        }
    }
    vi z;

    REP(i, 0, n * n)
    {
        z.eb(temp[i]);
        if (i % n == n - 1)
        {
            ans.eb(z);
            z.clear();
        }
    }
    REP(i, 0, n)
    {
        if (i % 2 == 0)
        {
            REP(j, 0, n)
            cout << ans[i][j] << " ";
            cout << "\n";
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
                cout << ans[i][j] << " ";
            cout << "\n";
        }
    }
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
