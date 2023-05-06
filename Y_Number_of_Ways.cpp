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

int solve(int s,int e)
{
    if(e==s)
    return 1;
    else if(e<s)
    return 0;
    else 
    return solve(s,e-1)+solve(s,e-2)+solve(s,e-3);
}

signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);

int s,e;
cin>>s>>e;
cout<<solve(s,e);
 

return 0;
}
