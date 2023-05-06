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

ll n,q,a,val=0;
cin>>n>>q;
vll v(n);
map<ll,ll>m;
ll sum=0;
REP(i,0,n)
{
    cin>>v[i];
    m[i]=v[i];
    sum+=v[i];
}
ll t,x;

while(q--) { 
cin>>t;
if(t==1)
{
    ll i,x;
    cin>>i>>x;
    i--;

    if(!m.count(i))
    m[i]=val;

    sum-=m[i];
    m[i]=x;
    sum+=m[i];

}
else
{
    ll x;
    cin>>x;
    val=x;
    sum=x*n;
    m.clear();
}

cout<<sum<<"\n";


}
return 0;
}
