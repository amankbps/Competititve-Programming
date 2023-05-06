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

    int m;
    cin >> m;
    int mini = INT_MAX;
    REP(i, 0, m)
    {
        int a;
        cin >> a, mini = min(mini, a);
    }
    int n;
    cin >> n;
    vi v(n);
    REP(i, 0, n)
    cin >> v[i];
    sort(v.rbegin(), v.rend());
    int ans = 0;
    int i = 0;
    while (i < n)
    {
        int cnt = 0;
        while (i < n && cnt < mini)
        {
            ans += v[i];
            i++;
            cnt++;
        }
        if (i + 1 < n)
        {

            i += 2;
        }
        else
            i++;
    }

    cout << ans << "\n";
    return 0;
}
