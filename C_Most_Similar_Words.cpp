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
    int n,m;
    cin>>n>>m;
    vector<string>v(n);
    REP(i,0,n)
    cin>>v[i];
    sort(v.begin(),v.end());
   ll ans=INT_MAX;
   
    REP(i,0,n)
    {
        ll cur=0;
        REP(j,0,m)
        {
             cur+=abs(v[i][j]-v[i-1][j]);
            
        }
        ans=min(ans,cur);
    }
   cout<<ans<<"\n";
}
return 0;
}
