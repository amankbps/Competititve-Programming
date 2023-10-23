#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
// PBDS
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// if we want set then change less_equal to less
// in multiset use --lower_bound() to find and erase
//  find_by_order(k): It returns to an iterator to the kth element
// order_of_key(k) : It returns to the number of items that are strictly smaller
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

vi t, v;
int merge(int l, int r)
{
    return gcd(l, r);
}
void build(int s, int e, int ind)
{
    if (s == e)
    {
        t[ind] = v[s];
        return;
    }
    int mid = (s + e) / 2;
    build(s, mid, 2 * ind);
    build(mid + 1, e, 2 * ind + 1);
    t[ind] = merge(t[2 * ind], t[2 * ind + 1]);
}
void update(int s, int e, int ind, int pos, int val)
{

    if (s == e)
    {
        t[ind] = val;
        return;
    }
    int mid = (s + e) / 2;
    if (mid >= pos)
        update(s, mid, 2 * ind, pos, val);
    else
        update(mid + 1, e, 2 * ind + 1, pos, val);
    t[ind] = merge(t[2 * ind], t[2 * ind + 1]);
}

int query(int s, int e, int ind, int l, int r)
{
    // disjoint
    if (s > r || e < l)
        return 0;
    if (s >= l && e <= r)
        return t[ind];
    int mid = (s + e) / 2;
    int left = query(s, mid, 2 * ind, l, r);
    int right = query(mid + 1, e, 2 * ind + 1, l, r);
    return merge(left, right);
}

void solve()
{
    int n;
    cin >> n;
    v.resize(n);
    t.resize(4 * n);
    REP(i, 0, n)
    cin >> v[i];
    build(0, n - 1, 1);
    int i = 0, j = 0, ans = INF;

    while (j < n)
    {

        while (i < n && query(0, n - 1, 1, j, i) != 1)
            i++;

        if (i == n)
            break;

        ans = min(ans, i - j + 1);

        j++;
        i = max(i, j);
    }
    if (ans == INF)
        ans = -1;
    cout << ans << "\n";
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
