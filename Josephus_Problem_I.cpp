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
    iota(all(v), 1);
    while (v.size() > 1)
    {
        vi temp;
        REP(i, 0, v.size())
        {
            if (i % 2 == 1)
                cout << v[i] << " ";
            else
                temp.eb(v[i]);
        }

        if (v.size() % 2 == 0)
            v = temp;
        else
        {
            int a = temp.back();
            v.clear();
            v.eb(a);
            temp.pop_back();
            REP(i, 0, temp.size())
            v.eb(temp[i]);
        }
    }
    cout << v[0] << "\n";
    return 0;
}
