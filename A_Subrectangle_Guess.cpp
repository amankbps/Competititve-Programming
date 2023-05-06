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


int tc;
cin>>tc;
while(tc--)
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int maxi=LLONG_MIN;
    int row,col;
    REP(i,0,n)
    {
        REP(j,0,m)
        {
            cin>>a[i][j];
            if(a[i][j]>maxi)
            {
                maxi=a[i][j];
                row=i+1;
                col=j+1;
            }
        }
    }
    int w=max(row,(n-row+1));
    int h=max(col,(m-col+1));
    cout<<h*w<<"\n";
}
return 0;
}
