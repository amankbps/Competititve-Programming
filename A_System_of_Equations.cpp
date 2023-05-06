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


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);

ll n,m;
cin>>n>>m;
ll cnt=0;
for(ll i=0;;i++)
{
    ll val=(i+(n-i*i)*(n-i*i)-m);
    if(val==0 && i*i<=n)
     cnt++;
     if(i*i>n)
     break;
}
cout<<cnt<<"\n";
return 0;
}
