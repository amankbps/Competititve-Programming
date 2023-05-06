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
vi prime(1e6+5,0);
void seive()
{
    for(int i=1;i<1e6+5;i++)
    {
        
            for(int j=i;j<1e6+5;j+=i)
             prime[j]++;
        
    }
}
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);


int tc;
seive();
cin>>tc;
while(tc--)
{
    int n;
    cin>>n;
    cout<<prime[n]<<"\n";
}
return 0;
}
