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

bool solve()
{
    int n;
    cin>>n;
    string s,t,s1="",t1="";
    cin>>s>>t;
    REP(i,0,n)
    {
        if(s[i]!='b')
        s1+=s[i];
        if(t[i]!='b')
        t1+=t[i];
    }
    if(s1!=t1)
    return false;
    vi v1,v2;
    for(int i=0;i<n;i++)
    {
         if(s[i]=='c')
         v1.eb(i);
         if(t[i]=='c')
         v2.pb(i);
    }
    for(int i=0;i<v1.size();i++)
      if(v1[i]<v2[i])
      return false;

     vi v3,v4;
    for(int i=0;i<n;i++)
    {
         if(s[i]=='a')
         v3.eb(i);
         if(t[i]=='a')
         v4.pb(i);
    }
    for(int i=0;i<v3.size();i++)
      if(v3[i]>v4[i])
      return false;

    return true;
}

signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);


int t;
cin>>t;
while(t--)
{
   if(solve())
   cout<<"YES\n";
   else
   cout<<"NO\n";
}
return 0;
}
