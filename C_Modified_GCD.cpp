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
vi gcd(int a, int b)
{
    int g = __gcd(a, b);
    vi ans;
    for (int i = 1; i * i <= g; i++)
    {
        if (g % i == 0)
        {
            if (g / i == i)
                ans.eb(g / i);
            else
                ans.eb(i), ans.eb(g / i);
        }
    }
    sort(all(ans));
    return ans;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    cin >> a >> b;
    vi v = gcd(a, b);
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        auto it = upper_bound(all(v), r);
        it--;
        int g = *it;

        if (l <= g)
            cout << g << "\n";
        else
            cout << -1 << "\n";
    }
    return 0;
}
