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


int t;
cin>>t;
while(t--)
{
    ll x,y;
    cin>>x>>y;
    ll r=max(x,y);
    ll l=min(x,y);
    ll sum1=r*(r+1)/2;
    
    ll sum2=l*(l-1)/2;
    cout<<abs(sum1-sum2)<<"\n";
}
return 0;
}
