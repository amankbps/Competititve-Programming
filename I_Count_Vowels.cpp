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

void solve(string &s,int n,int &ans)
{
     if(n<0)
     return;
     if(s[n]=='a' || s[n]=='e' || s[n]=='i' || s[n]=='o' || s[n]=='u')
       ans++;
     if(s[n]=='A' || s[n]=='E' || s[n]=='I' || s[n]=='O' || s[n]=='U')
       ans++;
    solve(s,n-1,ans);
}

signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);



    string s;
    getline(cin,s);
    int ans=0;
    solve(s,s.size()-1,ans);
    cout<<ans<<"\n";

return 0;
}
