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

    int x, n;
    cin >> x >> n;
    set<int> s;
    multiset<int> m;
    s.insert(0), s.insert(x);
    m.insert(x);
    int a;
    REP(i, 0, n)
    {
        cin >> a;
        s.insert(a);
        auto it = s.find(a);
        int pre = *prev(it);
        int nex = *next(it);
        m.erase(m.find(nex - pre));
        m.insert(a - pre);
        m.insert(nex - a);
        cout << *m.rbegin() << " ";
    }
    return 0;
}
