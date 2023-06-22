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
    int n, k;
    cin >> n >> k;
    vi arr(n + 1, 0);
    arr[1] = arr[n] = 1;
    for (int i = 2; i <= n; i++)
        if (i % k == 1)
            arr[i] = 1;

    int sum = 1;
    int j = 2;
    for (int i = n - 1; i >= 1; i--)
    {
        sum += arr[i];
        if (sum < (j - 1) / k + 1)
            arr[i] = 1, sum++;
        j++;
    }
    cout << accumulate(all(arr), 0LL) << "\n";
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
