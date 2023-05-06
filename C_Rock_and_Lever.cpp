#include <bits/stdc++.h>
using namespace std;
#define REP(i,x,y) for(long long i=x;i<y;i++)
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
typedef long long ll;
typedef vector<int>  vi;
typedef vector<vi>  vvi;
typedef vector<ll>  vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

void  solve()
{
   ll n;
   cin>>n;
   vll cnt(40),v(n);
   REP(i,0,n)
   {
       cin>>v[i];
       ll c=63-__builtin_clzll(v[i]);
       cnt[c]++;
   }
   ll ans=0;
   REP(i,0,32)
   {
       ans+=(cnt[i]*(cnt[i]-1)/2);
   }
   cout<<ans<<"\n";
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);


int t;
cin>>t;
while(t--)
{
    solve();
}
return 0;
}
