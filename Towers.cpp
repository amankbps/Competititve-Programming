#include <bits/stdc++.h>
using namespace std;
#define REP(i,x,y) for(long long i=x;i<y;i++)
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define int long long
#define all(x) x.begin(),x.end()
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

int n;
cin>>n;
multiset<int>m;
int a;

REP(i,0,n)
{
   cin>>a;
   auto it=m.upper_bound(a);
   if(it==m.end())
   {
      m.insert(a);
   }
   else
   {
        m.erase(it);
        m.insert(a);
   }
  

}

cout<<m.size();
return 0;
}
