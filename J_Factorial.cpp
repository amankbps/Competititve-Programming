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
 int solve(int n)
 {
    if(n==0)
    return 1;
    return n*solve(n-1);
 }

signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);

int n;
cin>>n;
cout<<solve(n);
return 0;
}
