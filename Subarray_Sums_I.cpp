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


int n,k;
cin>>n>>k;
vi v(n);
REP(i,0,n)cin>>v[i];
int cnt=0,sum=0;
int i=0,j=0;
while(j<n)
{
    sum+=v[j];
    while(i<=j && sum>k)
    {
         sum-=v[i];i++;
    }
  if(sum==k)
  {
     cnt++;
  }
  j++;
}
cout<<cnt<<"\n";
return 0;
}
