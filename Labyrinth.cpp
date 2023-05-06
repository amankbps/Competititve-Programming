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
#define INF 2e18
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

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
/*--------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    int n, m;
    cin >> n >> m;
    char grid[n][m];
    int dis[n][m];
    pii par[n][m];
    int sx, sy, dx, dy;
    REP(i, 0, n)
    {
        REP(j, 0, m)
        {
            dis[i][j] = INF;
            cin >> grid[i][j];
            if (grid[i][j] == 'A')
                sx = i, sy = j;
            if (grid[i][j] == 'B')
                dx = i, dy = j;
        }
    }
    queue<pii> q;
    dis[sx][sy] = 0;
    par[sx][sy] = {-1, -1};
    q.push({sx, sy});
    vi d = {0, -1, 0, 1, 0};
    while (!q.empty())
    {
        int nx = q.front().F, ny = q.front().S;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int newx = nx + d[i], newy = ny + d[i + 1];
            if (newx >= 0 && newx < n && newy >= 0 && newy < m)
            {
                if (grid[newx][newy] != '#' && dis[newx][newy] == INF)
                {
                    dis[newx][newy] = 1 + dis[nx][ny];
                    par[newx][newy] = {nx, ny};
                    q.push({newx, newy});
                }
            }
        }
    }
    if (dis[dx][dy] == INF)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    string path = "";
    while (dx != -1 && dy != -1)
    {
        if (par[dx][dy].F == -1)
            break;
        int px = par[dx][dy].F, py = par[dx][dy].S;
        if (px < dx)
            path += 'D';
        if (px > dx)
            path += 'U';
        if (py < dy)
            path += 'R';
        if (py > dy)
            path += 'L';
        dx = px, dy = py;
    }
    cout << path.size() << "\n";
    reverse(all(path));
    cout << path << "\n";
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
