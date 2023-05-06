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
    ll n;
    cin>>n;
    vll a(n),b(n);
    REP(i,0,n)
    cin>>a[i];
    REP(i,0,n)
    cin>>b[i];
    map<ll,ll>m;
    REP(i,0,n)
    {
        ll ans=a[i]^b[i];
        m[ans]++;
    }
    ll cnt=0;
    for(auto it:m)
    {
        if(it.S>1)
       {
           cnt+=(it.S*(it.S-1))/2;
       }
    }
    cout<<cnt<<"\n";
}
return 0;
}
