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

void sum(vll &v,ll ind,ll &ans)
{
    
       if(ind<0)
       return;
       ans+=v[ind];
       sum(v,ind-1,ans);

}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);

ll n;
cin>>n;
vll v(n);
REP(i,0,n)
cin>>v[i];
ll ans=0;
sum(v,n-1,ans);
cout<<ans;
return 0;
}
