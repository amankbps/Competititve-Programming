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

int cntdiv(int n)
{
    int cnt = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                cnt++;
            else
                cnt += 2;
        }
    }
    return cnt;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vi v;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                v.eb(i);
            else
                v.eb(i), v.eb(n / i);
        }
    }
    if (v.size() <= 2)
    {
        cout << 1 << "\n"
             << 0 << "\n";
        return 0;
    }
    bool flag = 0;
    sort(all(v));

    REP(i, 1, v.size() - 1)
    {
        if (cntdiv(v[i]) == 4 || cntdiv(v[i]) == 3)
        {
            cout << 1 << "\n"
                 << v[i] << "\n";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << 2 << "\n";
    return 0;
}
