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
n<<=1;
vi v(n);
set<int>s;
REP(i,0,n)
cin>>v[i];
int cnt=0;
for(auto it:v)
{
    auto se=s.find(it);
    if(se==s.end())
     {
        s.insert(it);
      int p=s.size();
       cnt=max(cnt,p);
     }
    else
    {
        s.erase(it);
    }
    
}
cout<<cnt<<"\n";
return 0;
}
