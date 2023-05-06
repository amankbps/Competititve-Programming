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

int main()
{
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt0 = 0, cnt1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0 && s[i] != '0')
                cnt0++;

            if (i % 2 == 1 && s[i] != '1')
                cnt0++;
        }
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 1 && s[i] != '0')
                cnt1++;

            if (i % 2 == 0 && s[i] != '1')
                cnt1++;
        }
        cout << min(cnt0, cnt1) << "\n";
    }
    return 0;
}
