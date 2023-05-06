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
ll n,q;
cin>>n>>q;
vll v(n);
REP(i,0,n)
cin>>v[i];
sort(v.begin(),v.end());
vll pre(n);
REP(i,0,n)
{
    pre[i]=v[i];
    if(i)
    pre[i]+=pre[i-1];
}
reverse(pre.begin(),pre.end());

while(q--)
{
    ll x,y;
    cin>>x>>y;
    if(x<n)
     cout<<pre[x-y]-pre[x]<<"\n";
     else
     cout<<pre[n-y]<<"\n";
}
return 0;
}
