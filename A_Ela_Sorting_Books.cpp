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

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> m;
        for (auto c : s)
            m[c]++;
        string ans = "";
        int p = n / k;
        REP(i, 0, k)
        {
            char c = 'a';
            int cnt = 0;
            while (1)
            {
                if (cnt >= p)
                    break;
                auto it = m.find(c);
                if (it == m.end())
                    break;
                else
                {
                    if (it->S == 1)
                        m.erase(it);
                    else
                        it->S--;
                }
                c++;
                cnt++;
            }
            ans += c;
        }
        cout << ans << "\n";
    }
    return 0;
}
