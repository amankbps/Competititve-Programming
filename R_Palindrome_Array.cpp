#include <bits/stdc++.h>
using namespace std;
#define REP(i,x,y) for(long long i=x;i<y;i++)
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define int long long
typedef long long ll;
typedef vector<int>  vi;
typedef vector<vi>  vvi;
typedef vector<ll>  vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

bool solve(vi &v,int s,int e)
{
    if(s>=e)
    return true;
    if(v[s]==v[e])
    return solve(v,++s,--e);
    else
    return false;
    
}

signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);

int n;
cin>>n;
vi v(n);
REP(i,0,n)
cin>>v[i];
if(solve(v,0,n-1))
cout<<"YES\n";
else
{
    cout<<"NO\n";
}

return 0;
}
