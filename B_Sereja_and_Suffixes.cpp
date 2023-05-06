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

ll n,m,a;
cin>>n>>m;
map<ll,ll>ma;
vll v(n);
REP(i,0,n)
{
    cin>>v[i];
    ma[v[i]]++;
}
vll dist(n);
REP(i,0,n)
{
    dist[i]=ma.size();
     auto it=ma.find(v[i]);
     if(it!=ma.end())
     if(it->S==1)
      ma.erase(v[i]);
      else
      it->S-=1;
}
 while(m--)
 {
    cin>>a;
    cout<<dist[a-1]<<"\n";
 }
return 0;
}
