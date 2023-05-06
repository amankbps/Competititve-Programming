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
    vll v(n);
    map<ll,pll>m;
    REP(i,0,n)
    {
        cin>>v[i];
        m[(v[i]-i)].F=i;
        m[(v[i]-i)].S++;

    }
    ll cnt=0;
    REP(i,0,n)
    {
        auto it=m.find(v[i]-i);
        if(it!=m.end() && it->S.F>i)
          cnt+=it->S.S;
    }
    cout<<cnt/2<<"\n";
}
return 0;
}
