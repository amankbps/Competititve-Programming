#include <bits/stdc++.h>
using namespace std;
#define REP(i, x, y) for (long long i = x; i < y; i++)
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define int long long
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

bool plain(string &s)
{
  string t = s;
  reverse(s.begin(), s.end());
  return s == t;
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
    string s;
    cin >> s;
    int x;
    cin >> x;
    int a = (s[0] - '0') * 10 + (s[1] - '0');
    int b = (s[3] - '0') * 10 + (s[4] - '0');
    int min = a * 60 + b;
    int t = min;
    int cnt = 0;
    t += x;

    while (t != min)
    {
      int hr = t / 60;
      int mi = t % 60;
      string h(2, '0');
      int i = 1;
      while (i >= 0)
      {
        h[i] = (hr % 10) + '0';
        hr /= 10;
        i--;
      }
      i = 1;
      string m(2, '0');
      while (i >= 0)
      {
        m[i] = (mi % 10) + '0';
        mi /= 10;
        i--;
      }
      string temp = h + ":" + m;
      cout << temp << "\n";
      if (plain(temp))
        cnt++;
      t += x;
    }
    cout << cnt << "\n";
  }
  return 0;
}
