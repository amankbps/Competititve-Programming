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

ll fun(ll n)
{
    if(n%4==0)
    return n;
    else if(n%4==1)
     return 0;
     else if(n%4==2)
      return n+1;
     else 
     return 0;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);

ll l,r;
cin>>l>>r;
ll ans=fun(l)^fun(r);
cout<<ans<<"\n";

return 0;
}
