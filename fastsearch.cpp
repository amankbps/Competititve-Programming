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
    ll n;
    cin>>n;
    vll v(n);
    REP(i,0,n)
    cin>>v[i];
    sort(v.begin(),v.end());
    ll k,l,r;
    cin>>k;
    while(k--)
    {
        cin>>l>>r;
        ll ans=0;
        auto it1=lower_bound(v.begin(),v.end(),l);
        auto it2=upper_bound(v.begin(),v.end(),r);
        if(it1==v.end() )
         cout<<0<<" ";
         else if(it2==v.end())
          cout<<n-(it1-v.begin())<<" ";
         else if(it1!=v.end() && it2!=v.end())
         cout<<it2-it1<<" ";
      
        

    }

}
return 0;
}
