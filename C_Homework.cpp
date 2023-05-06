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

    string s;
    cin >> s;
    int k;
    cin >> k;
    map<char, int> m;
    for (auto c : s)
        m[c]++;
    vector<pair<int, char>> v;
    for (auto it : m)
        v.eb(it.S, it.F);
    sort(all(v));
    int i = 0;
    while (i < v.size())
    {
        if (k == 0)
            break;
        k -= v[i].F;
        if (k < 0)
            break;
        i++;
    }
    cout << v.size() - i << "\n";
    multiset<char> mi;
    while (i < v.size())
    {
        REP(j, 0, v[i].F)
        mi.insert(v[i].S);
        i++;
    }
    for (auto c : s)
    {
        auto it = mi.find(c);
        if (it != mi.end())
        {
            cout << c;
            mi.erase(it);
        }
    }

    return 0;
}
