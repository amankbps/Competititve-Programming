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

int n,v;
cin>>n>>v;
vector<int>arr[n];
for(int i=0;i<n;i++)
{
    int k;
    cin>>k;
    vector<int>ans;
    ans.pb(k);
    REP(i,0,k)
    {
       int a;
       cin>>a;
       ans.eb(a);
    }
    sort(ans.begin(),ans.end());
    arr[i]=ans;
}
vector<int>cnt;
for(int i=0;i<n;i++)
{
    for(int j=1;j<arr[i].size();j++)
    {
        if(arr[i][j]<v)
        {
            cnt.eb(i+1);
            break;
        }
        else
        break;
    }
}
cout<<cnt.size()<<"\n";
for(auto it:cnt)
cout<<it<<" ";
return 0;
}
