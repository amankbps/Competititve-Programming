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
   
    vll a(n),b(n);
    REP(i,0,n)
    cin>>a[i];
    REP(i,0,n)
     cin>>b[i];
     cout<<b[0]-a[0]<<" ";
     REP(i,1,n)
     {
         cout<<min(b[i]-a[i],b[i]-b[i-1])<<" ";
     }
     cout<<"\n";

}
return 0;
}
