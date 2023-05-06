#include <bits/stdc++.h>
using namespace std;
#define REP(i, x, y) for (long long i = x; i < y; i++)
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

bool solve()
{
    int n;
    cin >> n;
    vi v(n);
    int x = 0, y = 0, z = 0;
    REP(i, 0, n)
    {
        cin >> v[i];
    }
    REP(i, 0, n)
    {
        if (v[i] == 25)
            x++;
        else if (v[i] == 50)
        {
            y++;
            if (x > 0)
                x--;
            else
                return false;
        }
        else
        {
            if (y > 0 && x > 0)
                y--, x--;
            else if (x > 2)
                x -= 3;
            else
                return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    if (solve())
        cout << "YES\n";
    else
    {
        cout << "NO\n";
    }

    return 0;
}
