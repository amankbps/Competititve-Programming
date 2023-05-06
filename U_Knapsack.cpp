#include <bits/stdc++.h>
using namespace std;
#define REP(i,x,y) for(long long i=x;i<y;i++)
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define int long long
typedef long long ll;
typedef vector<int>  vi;
typedef vector<vi>  vvi;
typedef vector<ll>  vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

int solve(vi&v,vi&w,int n,int W)
{
      if(n==0 || W==0)
      return 0;
      if(w[n-1]<=W)
      {
        return max(v[n-1]+solve(v,w,n-1,W-w[n-1]),solve(v,w,n-1,W));
      }
      else
      return solve(v,w,n-1,W);
      
}

signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);

int n,W;
cin>>n>>W;
vi v(n),w(n);
REP(i,0,n)
{
    cin>>w[i]>>v[i];
}
cout<<solve(v,w,n,W);
return 0;
}
