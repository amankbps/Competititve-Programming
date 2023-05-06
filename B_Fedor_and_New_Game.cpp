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


int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);

int n,m,k;
cin>>n>>m>>k;
bitset<32>arr[m+1];
REP(i,0,m+1)
{
    int a;
    cin>>a;
    arr[i]=a;
}
int ans=0;
REP(i,0,m)
{
    int diff=0;
    REP(j,0,32)
    {
        if(arr[m][j]!=arr[i][j])
         diff++;
    }
    if(diff<=k)
    ans++;
}
cout<<ans<<"\n";
return 0;
}
