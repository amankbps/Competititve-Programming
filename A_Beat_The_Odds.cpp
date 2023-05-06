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
    ll cnt=0;
    REP(i,0,n-1)
    {
        if((v[i]+v[i+1])%2==0)
          {
              i++;
              continue;
          }
          else if((v[i+1]+v[i+2])%2==0 && i<n-2)
          {
              i+=2;
              cnt++;
          }
          else if((v[i]+v[i+2])%2==0 && i<n-2)
          {
              i+=2;
              cnt++;
          }
    }
   
    cout<<cnt<<"\n";
}
return 0;
}
