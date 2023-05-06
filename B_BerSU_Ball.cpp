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
    vi v(n);
    for(auto &i:v)
     cin>>i;
     sort(v.begin(),v.end());
    
    int m;
    cin>>m;
    vi v1(m);
    REP(i,0,m)
    cin>>v1[i];
     sort(v1.begin(),v1.end());
    int cnt=0;
    REP(i,0,n)
    {
       
       REP(j,0,m)
       {
           if(abs(v[i]-v1[j])<=1)
           {
             v1[j]=INT_MIN;
              cnt++;
              break;

           }
       }
    }
    cout<<cnt<<"\n";

return 0;
}
