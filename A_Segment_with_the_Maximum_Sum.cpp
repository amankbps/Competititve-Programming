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
struct node
{
    int pre, suf, sum, ans;
};

void build(vector<node> &t, vi &v, int ind, int s, int e)
{
    // base case
    if (s == e)
    {
        t[ind].sum = v[s];
        t[ind].pre = t[ind].suf = t[ind].ans = max(0LL, v[s]);
        return;
    }
    int mid = (s + e) >> 1;
    build(t, v, 2 * ind, s, mid);
    build(t, v, 2 * ind + 1, mid + 1, e);

    // self work

    t[ind].sum = t[2 * ind].sum + t[2 * ind + 1].sum;
    t[ind].pre = max(t[2 * ind].pre, t[2 * ind].sum + t[2 * ind + 1].pre);
    t[ind].suf = max(t[2 * ind + 1].suf, t[2 * ind + 1].sum + t[2 * ind].suf);
    t[ind].ans = max({t[2 * ind].ans, t[2 * ind + 1].ans, t[2 * ind].suf + t[2 * ind + 1].pre, t[ind].sum});
}

void update(vector<node> &t, int ind, int s, int e, int i, int val)
{
    // base case
    if (s == e)
    {
        t[ind].sum = val;
        t[ind].pre = t[ind].suf = t[ind].ans = max(0LL, val);
        return;
    }
    int mid = (s + e) >> 1;
    if (i <= mid)
        update(t, 2 * ind, s, mid, i, val);
    else
        update(t, 2 * ind + 1, mid + 1, e, i, val);

    // self work

    t[ind].sum = t[2 * ind].sum + t[2 * ind + 1].sum;
    t[ind].pre = max(t[2 * ind].pre, t[2 * ind].sum + t[2 * ind + 1].pre);
    t[ind].suf = max(t[2 * ind + 1].suf, t[2 * ind + 1].sum + t[2 * ind].suf);
    t[ind].ans = max({t[2 * ind].ans, t[2 * ind + 1].ans, t[2 * ind].suf + t[2 * ind + 1].pre, t[ind].sum});
}

node query(vector<node> &t, int ind, int s, int e, int l, int r)
{
    if (s > r || e < l)
    {
        node res;
        res.sum = res.suf = res.pre = res.ans = 0;
        return res;
    }
    else if (s >= l && e <= r)
        return t[ind];
    int mid = (s + e) >> 1;
    node left = query(t, 2 * ind, s, mid, l, r);
    node right = query(t, 2 * ind + 1, mid + 1, e, l, r);

    node res;
    res.sum = left.sum + right.sum;
    res.pre = max(left.pre, left.sum + right.pre);
    res.suf = max(right.suf, right.sum + left.suf);
    res.ans = max({left.ans, right.ans, left.suf + right.pre, res.sum});
    return res;
}
void solve()
{
    int n, q;
    cin >> n >> q;
    vi v(n);
    REP(i, 0, n)
    cin >> v[i];
    vector<node> t(4 * n);
    build(t, v, 1, 0, n - 1);
    cout << query(t, 1, 0, n - 1, 0, n - 1).ans << "\n";
    while (q--)
    {
        int i, val;
        cin >> i >> val;
        update(t, 1, 0, n - 1, i, val);
        cout << query(t, 1, 0, n - 1, 0, n - 1).ans << "\n";
    }
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
