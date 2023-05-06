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

bool ISprime(ll n)
{
    if(n<2)
    return false;
    for(ll i=2;i*i<=n;i++)
     if(n%i==0)
     return false;
     return true;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);


int t;
cin>>t;
while(t--)
{
    ll x,y;
    cin>>x>>y;
    x=x-y;
    if(x<2)
    cout<<"NO\n";
    else 
      cout<<"YES\n";
   

}
return 0;
}
