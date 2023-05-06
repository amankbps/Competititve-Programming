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

bool checkplain(string &s)
{
    map<char,int>m;
    for(char it:s)
    {
        m[it]++;
    }
    int cnte=0;
   for(auto it:m)
   {
       if(it.S%2==0)
        cnte++;
   }
   if(cnte==m.size() || (cnte+1)==m.size())
    return true;
    else
    return false;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);

int n;
cin>>n;
vector<string>v(n);
ll ans=0;
REP(i,0,n-1)
{
    REP(j,i+1,n)
    {
        string s=v[i]+v[j];
        if(checkplain(s))
         ans++;
    }
}
cout<<ans<<"\n";
return 0;
}
