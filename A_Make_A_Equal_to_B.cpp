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

        vi a(n), b(n);
        int a1 = 0, a2 = 0, b1 = 0, b2 = 0;
        REP(i, 0, n)
        {
            cin >> a[i];
            if (a[i] == 0)
                a1++;
            else
                a2++;
        }
        REP(i, 0, n)
        {
            cin >> b[i];
            if (b[i] == 0)
                b1++;
            else
                b2++;
        }
        if ((a1 == b1 && a2 == b2) && a == b)
            cout << "0\n";
        else if ((a1 == b1 && a2 == b2) && a != b)
            cout << 1 << "\n";
        else if ((a1 == b2 && a2 == b1))
            cout << "1\n";
        else
        {
            int ans = abs(a1 - b1) + abs(a2 - b2);
            cout << ans / 2 << "\n";
        }
    }
    return 0;
}
