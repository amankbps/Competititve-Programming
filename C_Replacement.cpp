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

    int n;
    cin >> n;
    vi v(n);
    int mini = INT_MAX, maxi = INT_MIN;
    REP(i, 0, n)
    cin >> v[i], mini = min(mini, v[i]), maxi = max(maxi, v[i]);
    REP(i, 0, n)
    {
        if (mini == 1 && maxi == 1)
        {
            v[i] = 2;
            break;
        }
        if (v[i] == maxi)
        {
            v[i] = min(1 * 1LL, mini);
            break;
        }
    }
    sort(all(v));
    for (auto i : v)
        cout << i << " ";
    cout << "\n";
    return 0;
}
