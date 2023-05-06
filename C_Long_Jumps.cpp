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
    int n;
    cin>>n;
    vi v(n);
    REP(i,0,n)
    cin>>v[i];
   
    vi dp(n);
    for(int i=n-1;i>=0;i--)
    {
        dp[i]=v[i];
        int j=i+v[i];
        if(j<n)
        dp[i]+=dp[j];

    }
    cout<<*max_element(dp.begin(),dp.end())<<"\n";
}
return 0;
}
