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

ll sumdig(ll x)
{
     ll sum=0;
    while(x)
    {
        sum+=(x%10);
        x/=10;
    }
    return sum;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);


int t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
   ll ans;
   while(1)
   {
      ll x=sumdig(n);
      if(__gcd(n,x)>1)
      {
          ans=n;
          break;
      }
      n++;
   }
   cout<<ans<<"\n";

}
return 0;
}
