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
    string s;
    cin>>s;
    
    int cnt0=s.size()-1;
  for(int i=s.size();i>=0;i--)
  {
     if(s[i]=='0')
      cnt0=i;
  }
  int ans=0;
  for(int i=cnt0;i>=0;i--)
  {
    ans++;
     if(s[i]=='1')
       break;
  }
  cout<<ans<<"\n";
}
return 0;
}
