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
    string s;
    cin >> s;
    int cnt1 = 0, cnt0 = 0;
    REP(i, 0, n)
    {

        if (s[i] == '1')
            cnt1++;
        else
            cnt0++;
    }
    int x = 0, y = 0;
    int a = 0, b = 0;
    REP(i, 0, n)
    {
        if (i + 1 < n && s[i] == '1' && s[i + 1] == '1')
            a++;
        else
        {
            x = max(x, a + 1);
            a = 0;
        }
        if (i + 1 < n && s[i] == '0' && s[i + 1] == '0')
            b++;
        else
        {
            y = max(y, b + 1);
            b = 0;
        }
    }
    x = max(x, a);
    y = max(y, b);

    cout << max({cnt1 * cnt0, x * x, y * y})
         << "\n";
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
