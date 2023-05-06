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

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vi v(n);

        REP(i, 0, n)
        {
            cin >> v[i];
        }
        if (n == 1)
        {
            cout << "YES\n";
            continue;
        }
        bool ok = true;
        int cnt = 0;
        REP(i, 1, n)
        {
            if (v[i] > v[i - 1])
            {
                ok = false;
                break;
            }
            if ((v[i - 1] % v[i]) != 0)
            {
                cnt++;
            }
            if (cnt > 1)
            {
                ok = false;
                break;
            }
        }
        if (ok == true)
        {
            cout << "YES\n";
            continue;
        }
        ok = true;
        cnt = 0;
        REP(i, 0, n - 1)
        {
            if (v[i] < v[i + 1])
            {
                ok = false;
                break;
            }
            if ((v[i + 1] % v[i]) != 0)
            {
                cnt++;
            }
            if (cnt > 1)
            {
                ok = false;
                break;
            }
        }
        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
