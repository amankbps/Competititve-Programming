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
vll v(n),ans(n);

REP(i,0,n)
{
     cin>>v[i];
    ll c=(v[i]+m-1)/m;
    ans[i]=c;
}
ll res=0;
ll last=*max_element(ans.begin(),ans.end());
REP(i,0,n)
{
    if(ans[i]==last)
      res=i+1;
}
cout<<res<<"\n";
return 0;
}
