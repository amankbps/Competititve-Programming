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

void solve(vi &v,int n,int m,int &sum)
{
       if(m==0)
       return;
       sum+=v[n];
      
       solve(v,n-1,--m,sum);

}

signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);



    int n,m;
    cin>>n>>m;
    vi v(n);
    REP(i,0,n)
    cin>>v[i];
    int sum=0;
    solve(v,n-1,m,sum);
    cout<<sum;

return 0;
}
