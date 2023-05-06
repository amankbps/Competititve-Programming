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

int solve(int n,int r)
{
     if(r==0)
     return 1;
     return solve(n,r-1)*(n-r+1)/r;
}

signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);

int n,r;
cin>>n>>r;
cout<<solve(n,r);
return 0;
}
