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
    map<char, int> m;
    for (auto c : s)
        m[c]++;
    int cnt = 0;
    for (auto it : m)
    {
        if (it.S % 2 == 1)
            cnt++;
    }
    if (cnt == 0 || (cnt % 2 == 1))
        cout << "First\n";
    else
        cout << "Second\n";
    return 0;
}
