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
    if(n%4==0)
    {
        cout<<"YES\n";
        ll sum1=0;
        for(ll i=2;i<=n;i+=2)
         {cout<<i<<' ';
         sum1+=i;
         }
         
         ll sum2=0;
         for(ll i=1;i<=n-3;i+=2)
          {
              cout<<i<<" ";
              sum2+=i;
          }
          cout<<sum1-sum2<<"\n";
    }
    else
    cout<<"NO\n";
}
return 0;
}
