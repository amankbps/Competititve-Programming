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

int n,a;
cin>>n;
vi v1,v2,v3;
REP(i,0,n)
{
    cin>>a;
    if(a==1)
    v1.eb(i+1);
    else if(a==2)
     v2.eb(i+1);
     else
     v3.eb(i+1);
}
int si=min({v1.size(),v2.size(),v3.size()});
  if(si==0)
  cout<<0<<"\n";
  else
  { 
      cout<<si<<"\n";
 for(int i=0;i<si;i++)
 {
     cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<"\n";
 }}
return 0;
}
