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

int mul(int a,int b,int x,int y,int n)
{
    int d1=a-x;
    int d2=b-y;
    int c1=min(d1,n);
     a-=c1;
     n-=c1;
     int c2=min(d2,n);
     b-=c2;
     n-=c2;
     int ans=a*b;
     return ans;
}

signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);


int tc;
cin>>tc;
while(tc--)
{
    int a,b,x,y,n;
    cin>>a>>b>>x>>y>>n;
    cout<<min(mul(a,b,x,y,n),mul(b,a,y,x,n))<<"\n";
}
return 0;
}
