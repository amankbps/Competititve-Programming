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
ll w,h,n;
bool check(ll x)
{
    ll ans1=x/w;
    ll ans2=x/h;
    
    if(ans1>=1e9 || ans2>=1e9)
    return true;
    else
    return (ans1*ans2)>=n;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);


cin>>w>>h>>n;
ll low=0;
ll high=1e18;
ll ans=1;
while(low<=high)
{
   ll mid=(low+high)/2;
   if(check(mid))
   {
         ans=mid;
         high=mid-1;
   }
   else
   low=mid+1;
}
cout<<ans<<"\n";
return 0;
}
