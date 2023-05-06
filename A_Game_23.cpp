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


ll n,m,ans=0;
cin>>n>>m;
if(m%n==0  )
   {
       m=m/n;
       while(m%3==0 || m%2==0)
       {
           if(m%3==0)
             m/=3;
         else
           m/=2;
           ans++;
          
       }
      if(m==1)
       cout<<ans<<'\n';
       else
       cout<<-1<<"\n";
   }
   else 
   cout<<-1<<"\n";

return 0;
}
