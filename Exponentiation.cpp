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


signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);


int tc;
cin>>tc;
while(tc--)
{
    int a,b;
    cin>>a>>b;
    int ans=1;
    while(b)
    {
        if(b&1)
        {
            ans=(ans%MOD*a%MOD)%MOD;
        }
        a=(a%MOD*a%MOD)%MOD;
        b>>=1;
    }
    cout<<ans<<"\n";
}
return 0;
}
