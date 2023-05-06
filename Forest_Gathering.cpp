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
ll n,w,l;

bool check(ll mid,vpll &v)
{
    ll wood=0;
    for(auto it:v)
    {
       if(mid>=((l-it.F+it.S-1)/it.S))
       {  wood+=it.F;
        if(wood>=w)
        return true;
        wood+=(mid*it.S);}
        if(wood>=w)
        return true;
    }
    return wood>=w;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);


cin>>n>>w>>l;
vpll v(n);
REP(i,0,n)
cin>>v[i].F>>v[i].S;
sort(v.begin(),v.end());
ll low=0;
ll high=1e18+3;
ll ans=0;
while(low<=high)
{
    ll mid=low+(high-low)/2;
    if(check(mid,v))
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
