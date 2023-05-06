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
#define INF 2e18
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
/*---------------------------------------------------------------------------------------------------------------------------*/

void solve()
{
    int n;
    cin >> n;
    int xi = 0, yi = 0;
    string s;
    cin >> s;
    REP(i, 0, n)
    {
        if (xi == 1 && yi == 1)
        {
            cout << "YES\n";
            return;
        }
        if (s[i] == 'U')
            yi++;
        else if (s[i] == 'D')
            yi--;
        else if (s[i] == 'R')
            xi++;
        else
            xi--;
    }
    if (xi == 1 && yi == 1)
        cout << "YES\n";
    else
        cout << "NO\n";
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
