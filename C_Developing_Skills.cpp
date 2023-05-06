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

int solve()
{
    int n, k;
    cin >> n >> k;
    vpii v(n);
    REP(i, 0, n)
    {
        cin >> v[i].F;
        int x = v[i].F;
        if (x / 10 == 0)
            v[i].S = (10 - x);
        else if (x / 100 == 0)
        {
            if (x / 10 == 9)
            {
                v[i].S = (100 - x);
            }
            else
                v[i].S = ((x / 10 + 1) * 10 - x);
        }
        else
            v[i].S = 0;
    }

    sort(all(v), [](pii a, pii b)
         {
             if (a.S != b.S)
                 return a.S < b.S;
             else
                 return a.F > b.F; });
    REP(i, 0, n)
    {
        if ((k - v[i].S) >= 0)
        {
            v[i].F += v[i].S;
            k -= v[i].S;
        }
        else
            break;
    }
    int ans = 0;
    if (k <= 0)
    {
        for (auto i : v)
            ans += (i.F) / 10;
        return ans;
    }
    REP(i, 0, n)
    {
        int x = (100 - v[i].F);
        if (k <= x)
        {
            v[i].F += k;
            break;
        }
        else
        {
            v[i].F += x;
            k -= x;
        }
    }
    for (auto i : v)
        ans += (i.F) / 10;
    return ans;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cout << solve() << "\n";
    return 0;
}
