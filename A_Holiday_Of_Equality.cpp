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

int n;
cin>>n;
vi v(n);
int maxi=INT_MIN;
REP(i,0,n)
{
    cin>>v[i];
    maxi=max(maxi,v[i]);
}
int ans=0;
REP(i,0,n)
ans+=(maxi-v[i]);
if(n==1)
cout<<0<<"\n";
else
cout<<ans<<"\n";
return 0;
}
