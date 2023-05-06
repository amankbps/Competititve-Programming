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
    int n, m, k;
    cin >> n >> m >> k;
    int arr[m][2];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }

    set<pair<int, int>> s;
    for (int i = 0; i < m; i++)
        s.insert({arr[i][0], arr[i][1]});
    set<int> ans;
    for (auto it : s)
    {
        if (it.first == it.second)
            ans.insert(it.first);
        else
        {
            auto it1 = s.find({it.first, it.second + 1});
            if (it1 != s.end())
                ans.insert(it.second + 1);
            it1 = s.find({it.first + 1, it.second});
            if (it1 != s.end())
                ans.insert(it.first);
        }
    }
    vector<int> v;
    for (auto i : ans)
        v.emplace_back(i), cout << i << " ";
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc = 1;
    // cin>>tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
