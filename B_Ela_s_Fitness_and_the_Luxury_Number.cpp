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

bool isperfect(int n)
{
    int i = sqrt(n);
    return i * i == n;
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
        int l, r;
        cin >> l >> r;
        int tot = 0;
        int p = 3 - l + 1;
        int q = 4;
        if (q > 3)
        {

            int cnt = (sqrt(r) - ceil(sqrt(l)) + 1);
            tot = (cnt - 1) * 2 + cnt;
            if (isperfect(l) == false)
            {
                int a = sqrt(l);
                int x = a;
                a++;
                a *= a;
                a = (a / x) * x;
                if (x > 1)
                {
                    if (a >= l)
                        tot++;
                    if ((a - x) >= l)
                        tot++;
                }
            }
            if (isperfect(r) == false)
            {
                int a = sqrt(r);
                int x = a + 1;

                a *= a;

                a = (a / x) * x;
                if (a + x <= r)
                    tot++;
                if ((a + 2 * x) <= r)
                    tot++;
            }
        }
        else
            tot += p;
        cout << tot << "\n";
    }
    return 0;
}
