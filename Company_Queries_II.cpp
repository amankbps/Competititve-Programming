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
#define sz(x) (int)x.size()
#define INF 2e18
typedef long long ll;
typedef vector<int> vi;
typedef vector<bool> vb;
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
struct SparseTable
{
    int n, LOG;
    vector<vector<int>> table;
    vector<int> a;

    int merge(int x, int y)
    {
        return a[x] <= a[y] ? x : y;
    }

    SparseTable(const vector<int> &input) : n(input.size()), LOG(log2(n) + 1), a(input), table(n, vector<int>(LOG + 1, -1))
    {
        for (int i = 0; i < n; i++)
        {
            table[i][0] = i;
        }

        for (int j = 1; (1 << j) <= n; j++)
        {
            for (int i = 0; i + (1 << j) - 1 < n; i++)
            {
                int x = table[i][j - 1];
                int y = table[i + (1 << (j - 1))][j - 1];
                table[i][j] = merge(x, y);
            }
        }
    }

    int query(int l, int r)
    {
        int j = log2(r - l + 1);
        int x = table[l][j];
        int y = table[r - (1 << j) + 1][j];
        return a[x] <= a[y] ? x : y;
    }
};

void solve()
{
    int n, q;
    cin >> n >> q;
    vi adj[n + 1];
    REP(i, 2, n + 1)
    {
        int x;
        cin >> x;
        adj[i].eb(x);
        adj[x].eb(i);
    }
    map<int, int> mp;
    vi level, flat;
    int idx = 0; // it is the index of element in flat tree to keep the first occuranc in map
    function<void(int, int, int)> dfs = [&](int node, int par, int d)
    {
        mp.insert({node, idx});
        flat.eb(node);
        level.eb(d);
        idx++;

        for (auto it : adj[node])
            if (it != par)
            {
                dfs(it, node, d + 1);
                flat.eb(node);
                level.eb(d);
                idx++;
            }
    };
    dfs(1, 0, 0);

    SparseTable st(level);
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        if (mp[a] > mp[b])
            swap(a, b);
        int ans = st.query(mp[a], mp[b]);

        cout << flat[ans] << "\n";
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
