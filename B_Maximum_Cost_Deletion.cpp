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
    int n,a,b; 
    cin>>n>>a>>b; 
    string s;
    cin>>s;
    if(b<0)
    {
      int cnt=1;
      REP(i,0,s.size()-1)
      {
          if(s[i]!=s[i+1])
          cnt++;
      }
      cout<<(cnt/2+1)*b+a*n<<"\n";
    }
    else
    cout<<(a+b)*n<<"\n";
}
return 0;
}
