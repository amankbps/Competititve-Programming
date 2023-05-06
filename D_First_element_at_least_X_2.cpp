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

vi t, v;
int merge(int l, int r)
{
    return max(l, r);
}
void build(int start, int end, int ind)
{
    if (start == end)
    {
        t[ind] = v[start];
        return;
    }
    int mid = (start + end) >> 1LL;
    build(start, mid, 2 * ind);
    build(mid + 1, end, 2 * ind + 1);
    t[ind] = merge(t[2 * ind], t[2 * ind + 1]);
}
void update(int start, int end, int ind, int pos, int val)
{
    if (start == end)
    {
        t[ind] = val;
        return;
    }
    int mid = (start + end) >> 1LL;
    if (mid >= pos)
        update(start, mid, 2 * ind, pos, val);
    else
        update(mid + 1, end, 2 * ind + 1, pos, val);
    t[ind] = merge(t[2 * ind], t[2 * ind + 1]);
}

int query(int start, int end, int ind, int l, int r)
{
    // disjoiont
    if (start > r || end < l)
        return -INF;

    // complete lies
    if (start >= l && end <= r)
        return t[ind];
    int mid = (start + end) >> 1;
    int left = query(start, mid, 2 * ind, l, r);
    int right = query(mid + 1, end, 2 * ind + 1, l, r);
    return merge(left, right);
}

void solve()
{
    int n, q;
    cin >> n >> q;
    v.resize(n);
    t.resize(4 * n);
    REP(i, 0, n)
    cin >> v[i];
    build(0, n - 1, 1);
    while (q--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int pos, val;
            cin >> pos >> val;
            update(0, n - 1, 1, pos, val);
        }
        else
        {
            int x, l;
            cin >> x >> l;

            auto check = [&](int mid)
            {
                int maxi = query(0, n - 1, 1, l, mid);
                return maxi >= x;
            };
            int low = l, high = n - 1, ans = -1;
            while (low <= high)
            {
                int mid = (low + high) >> 1;
                if (check(mid))
                {
                    ans = mid;
                    high = mid - 1;
                }
                else
                    low = mid + 1;
            }
            cout << ans << "\n";
        }
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
