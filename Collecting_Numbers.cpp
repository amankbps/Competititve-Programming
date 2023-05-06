#include <bits/stdc++.h>
using namespace std;
#define REP(i,x,y) for(long long i=x;i<y;i++)
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define int long long
#define all(x) x.begin(),x.end()
typedef long long ll;
typedef vector<int>  vi;
typedef vector<vi>  vvi;
typedef vector<ll>  vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;


signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);

int n;
cin>>n;
vi v(n+1,0);
vector<bool>vis(n+1,false);
int a;
REP(i,0,n)
{
    cin>>a;
    if(v[a-1]>0 || vis[a-1]==true)
    {
        vis[a]=true;
        continue;
    }
    else 
     v[a]++,vis[a]=true;
     
     
}

cout<<accumulate(all(v),0)<<"\n";
return 0;
}
