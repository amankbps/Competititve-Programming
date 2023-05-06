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
    int n = s.size() - 1;
    if (s.size() == 1)
    {
        if ((s[0] - '0') % 3 == 0)
            cout << s << "\n";
        else
            cout << -1 << "\n";
        return 0;
    }
    string ans = "";
    int sum = 0;
    for (auto c : s)
        sum += (c - '0');
    int m = sum % 3;
    if (m == 0)
    {
        reverse(all(s));

        while (s.back() == '0' && s.size() > 1)
        {
            s.pop_back();
        }
        reverse(all(s));
        cout << s << "\n";
    }
    else
    {
        int ind = -1;
        for (int i = 0; i < s.size(); i++)
        {
            if ((s[i] - '0') % 3 == m)
            {
                ind = i;
                break;
            }
        }

        if (ind == -1)
        {
            if (count(all(s), '0') > 0)
                cout << 0 << "\n";
            else
                cout << -1 << "\n";
        }
        else
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (ind != i)
                    ans += s[i];
            }
            reverse(all(ans));

            while (ans.back() == '0' && ans.size() > 1)
            {
                ans.pop_back();
            }
            reverse(all(ans));
            cout << ans << "\n";
        }
    }
    return 0;
}
