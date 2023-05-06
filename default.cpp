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
ll search(ll x,ll low,ll high)
{
	while(low<=high)
	{
		ll mid=(low+high)/2;
		if(mid==x)
		return (mid-low);
		else if(mid>x)
		 high=mid-1;
		 else
		 low=mid+1;
		 
	}
	return 0;
}
int main()
{
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{ 
	  ll n,x;
	  cin>>n>>x;
	  vll v(n);
	  REP(i,0,n)
	  cin>>v[i];
	  sort(v.begin(),v.end());
	  ll ans=0;
	  REP(i,0,n)
	  {
		    x=x-v[i];
			if(x>=0)
			ans++;
			if(x<0)
			break;
           ans+=search(x,v[i],1e9+1);
	  }
	  
	  cout<<ans<<"\n";
	}
	return 0;
}
