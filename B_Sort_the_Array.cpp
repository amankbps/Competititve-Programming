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

void solve()
{
    int n;
    cin >> n;
    vi v(n);
    REP(i, 0, n)
    cin >> v[i];
    if (n == 1)
    {
        cout << "yes\n";
        cout << 1 << " " << 1 << "\n";
        return;
    }
    if (is_sorted(all(v)))
    {
        cout << "yes\n";
        cout << 1 << " " << 1 << "\n";
        return;
    }
    if (v[0] >= v[1])
    {
        int ind1 = 0, ind2 = n - 1;
        REP(i, 1, n)
        {
            if (v[i - 1] >= v[i])
            {
                ind1 = i;
            }
            else
                break;
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (v[i + 1] >= v[i])
            {
                ind2 = i;
            }
            else
                break;
        }
        if (ind1 == ind2 && (v[0] > v[n - 1] || v[n - 1] > v[0]))
        {
            cout << "yes\n";
            cout << 1 << " " << ind1 + 1 << "\n";
            return;
        }
        else
        {
            cout << "no\n";
            return;
        }
    }
    else
    {

        int ind1 = 0, ind2 = n - 1;
        REP(i, 1, n)
        {
            if (v[i - 1] <= v[i])
            {
                ind1 = i;
            }
            else
                break;
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (v[i + 1] <= v[i])
            {
                ind2 = i;
            }
            else
                break;
        }
        if (ind1 == ind2)
        {
            cout << "yes\n";
            cout << 1 << " " << ind1 + 1 << "\n";
            return;
        }
        else
        {
            cout << "no\n";
            return;
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
