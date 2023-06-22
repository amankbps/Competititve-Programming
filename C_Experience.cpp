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
// first four is adjacent after digonal
int dx[8] = {0, 1, 0, -1, 1, 1, -1, -1};
int dy[8] = {1, 0, -1, 0, 1, -1, -1, 1};
/*--------------------------------------------------------------------------------------------------------------------------*/
class dsu
{
    vector<int> parent, size, rank;
    vector<int> expPoints; // Additional variable for experience points

public:
    dsu(int n)
    {
        for (int i = 0; i <= n; i++)
        {
            size.push_back(1);
            parent.push_back(i);
            rank.push_back(0);
            expPoints.push_back(0); // Initialize experience points
        }
    }

    int findpar(int node)
    {
        if (parent[node] == node)
        {
            return node;
        }

        return parent[node] = findpar(parent[node]);
    }

    void unionsize(int u, int v)
    {
        int pu = findpar(u);
        int pv = findpar(v);

        if (pu == pv)
        {
            return;
        }

        if (size[pu] < size[pv])
        {
            parent[pu] = pv;
            size[pv] += size[pu];
            expPoints[pv] += expPoints[pu] + expPoints[v]; // Update experience points of the merged team
        }
        else
        {
            parent[pv] = pu;
            size[pu] += size[pv];
            expPoints[pu] += expPoints[pv] + expPoints[u]; // Update experience points of the merged team
        }
    }

    void unionrank(int u, int v)
    {
        int pu = findpar(u);
        int pv = findpar(v);

        if (pu == pv)
        {
            return;
        }
        if (rank[pu] == rank[pv])
        {
            parent[pu] = pv;
            rank[pu]++;
            expPoints[pv] += expPoints[pu] + expPoints[v]; // Update experience points of the merged team
        }
        else if (rank[pu] < rank[pv])
        {
            parent[pu] = pv;
            expPoints[pv] += expPoints[pu] + expPoints[v]; // Update experience points of the merged team
        }
        else
        {
            parent[pv] = pu;
            expPoints[pu] += expPoints[pv] + expPoints[u]; // Update experience points of the merged team
        }
    }

    void addExpPoints(int x, int v)
    {
        int p = findpar(x);
        expPoints[p] += v; // Add experience points to the team
    }

    int getExpPoints(int x)
    {
        int p = findpar(x);
        return expPoints[p]; // Get experience points of the team
    }
};

void solve()
{
    int n, m;
    cin >> n >> m;
    dsu d(n);
    while (m--)
    {
        string queryType;
        cin >> queryType;
        if (queryType == "join")
        {
            int x, y;
            cin >> x >> y;
            d.unionsize(x, y);
        }
        else if (queryType == "add")
        {
            int x, v;
            cin >> x >> v;
            d.addExpPoints(x, v);
        }
        else if (queryType == "get")
        {
            int x;
            cin >> x;
            int expPoints = d.getExpPoints(x);
            cout << expPoints << endl;
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
