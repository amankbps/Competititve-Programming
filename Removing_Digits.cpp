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

int dp[1000100];
int digit(int n)
{
    if (n == 0)
        return 0;
    if (dp[n] != 0)
        return dp[n];
    int mini = n;
    string s = to_string(n);
    for (auto i : s)
    {
        if (i != '0')
        {
            int temp = (n - (i - '0'));

            mini = min(mini, digit(temp) + 1);
        }
    }
    dp[n] = mini;
    return dp[n];
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    // memset(dp, -1, sizeof(dp));

    cout << digit(n) << "\n";
    return 0;
}
