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

int n;
cin>>n;
multiset<int>s;
vi v(n);
REP(i,0,n)
{
   cin>>v[i];
   s.insert(v[i]);

}
if(s.size()==2)
cout<<0<<"\n";
else
{
    auto it=s.rbegin();
    it++;
     int ans1=(*it-*s.begin());
     auto it1=s.begin();
     it1++;
    
     int ans2=(*s.rbegin()-*it1);
  cout<<min(ans1,ans2)<<"\n";
}

return 0;
}
