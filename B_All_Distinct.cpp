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


int tc;
cin>>tc;
while(tc--)
{
    int n;
    cin>>n;
    map<int,int>m;
    int a;
    REP(i,0,n)
    {
        cin>>a;
        m[a]++;
    }
   
    if(((n-m.size())&1)==0)
    cout<<m.size()<<"\n";
    else
   cout<<m.size()-1<<"\n";
    
}
return 0;
}
