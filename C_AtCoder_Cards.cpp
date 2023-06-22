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
ll gcd(ll a, ll b)
{
    if (b > a)
    {
        return gcd(b, a);
    }
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
ll expo(ll a, ll b, ll mod)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b = b >> 1;
    }
    return res;
}
void extendgcd(ll a, ll b, ll *v)
{
    if (b == 0)
    {
        v[0] = 1;
        v[1] = 0;
        v[2] = a;
        return;
    }
    extendgcd(b, a % b, v);
    ll x = v[1];
    v[1] = v[0] - v[1] * (a / b);
    v[0] = x;
    return;
} // pass an arry of size1 3
ll mminv(ll a, ll b)
{
    ll arr[3];
    extendgcd(a, b, arr);
    return arr[0];
} // for non prime b
ll mminvprime(ll a, ll b) { return expo(a, b - 2, b); }
bool revsort(ll a, ll b) { return a > b; }
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact)
{
    ll val1 = fact[n];
    ll val2 = ifact[n - r];
    ll val3 = ifact[r];
    return (((val1 * val2) % m) * val3) % m;
}
vector<ll> sieve(int n)
{
    int *arr = new int[n + 1]();
    vector<ll> vect;
    for (int i = 2; i <= n; i++)
        if (arr[i] == 0)
        {
            vect.push_back(i);
            for (int j = 2 * i; j <= n; j += i)
                arr[j] = 1;
        }
    return vect;
}
ll mod_add(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a + b) % m) + m) % m;
}
ll mod_mul(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}
ll mod_sub(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a - b) % m) + m) % m;
}
ll mod_div(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (mod_mul(a, mminvprime(b, m), m) + m) % m;
} // only for prime m
ll phin(ll n)
{
    ll number = n;
    if (n % 2 == 0)
    {
        number /= 2;
        while (n % 2 == 0)
            n /= 2;
    }
    for (ll i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
                n /= i;
            number = (number / i * (i - 1));
        }
    }
    if (n > 1)
        number = (number / n * (n - 1));
    return number;
} // O(sqrt(N))
ll getRandomNumber(ll l, ll r) { return uniform_int_distribution<ll>(l, r)(rng); }
/*--------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    string s1, s2;
    cin >> s1 >> s2;

    set<char> s;
    for (auto c : "atcoder")
        s.insert(c);
    string a = "", b = "";
    map<char, int> m1, m2;
    int cnt1 = 0, cnt2 = 0;
    REP(i, 0, s1.size())
    {
        if (s.find(s1[i]) != s.end())
            m1[s1[i]]++;
        else if (s1[i] == '@')
            cnt1++;
        else
            a += s1[i];
    }
    REP(i, 0, s2.size())
    {
        if (s.find(s2[i]) != s.end())
            m2[s2[i]]++;
        else if (s2[i] == '@')
            cnt2++;
        else
            b += s2[i];
    }

    sort(all(a)), sort(all(b));

    for (auto &it : m1)
    {
        cout << cnt1 << " " << it.F << " " << it.S << "\n";
        auto it1 = m2.find(it.F);

        if (it1 != m2.end())
        {
            if (it.S < (it1->S))
            {
                m2[it.F] -= it.S;
                it.S = 0;
            }
            else
            {
                it.S -= (it1->S);
                m2[it.F] = 0;
                it.S = 0;
                cnt1 -= it.S;
            }
        }
        else
            cnt1 -= it.S, it.S = 0;
    }

    for (auto it : m2)
    {
        auto it1 = m1.find(it.F);

        if (it1 != m1.end())
        {
            if (it.S < (it1->S))
            {
                m1[it.F] -= it.S;
            }
            else
            {
                it.S -= (it1->S);
                m1[it.F] = 0;
                cnt2 -= it.S;
            }
        }
        else
            cnt2 -= it.S;
    }
    cout << cnt1 << " " << cnt2 << "\n";
    if (a == b && cnt1 == cnt2)
        cout << "Yes\n";
    else
        cout << "No\n";
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
