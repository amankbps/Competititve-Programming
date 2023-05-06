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

int dp[1007][1007];
char a[1007][1007];

int path(int n, int m)
{
    if (n < 0 || m < 0)
        return 0;
    if (a[n][m] == '*')
        return 0;
    if (n == 0 && m == 0)
        return 1;
    if (dp[n][m] != -1)
        return dp[n][m];

    dp[n][m] = (path(n - 1, m) % MOD + path(n, m - 1) % MOD) % MOD;
    return dp[n][m];
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    REP(i, 0, n)
    REP(j, 0, n)
    cin >> a[i][j];

    cout << path(n - 1, n - 1) % MOD << "\n";
    return 0;
}
