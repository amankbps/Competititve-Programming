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

bool check(int mid,int n,int k)
{
    return (mid-(mid/n))>=k;
}

signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);


int tc;
cin>>tc;
while(tc--)
{
    int n,k;
    cin>>n>>k;
    int low=1,high=2*k;
    int ans=0;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(check(mid,n,k))
        {
            high=mid-1;
        }
        else
        {
            ans=mid;
            low=mid+1;
        }
        
    }
    cout<<ans+1<<"\n";
}
return 0;
}
