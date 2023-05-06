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
    REP(i, 0, n)
    cin >> v[i];
    vi temp = v;
    sort(all(temp));
    int cnt = 0;
    REP(i, 0, n)
    {
        if (v[i] != temp[i])
            cnt++;
    }
    // cout << cnt << "\n";
    cnt = ((cnt + 1) >> 1);
    if (cnt > 1)
        cout << "NO\n";
    else
        cout << "YES\n";
    return 0;
}
