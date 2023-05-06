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

int a[5][5];
int ans=0;
REP(i,0,5)
{
    REP(j,0,5)
    {
        cin>>a[i][j];
        if(a[i][j]==1)
         ans=abs(2-i)+abs(2-j);
    }
}
cout<<ans<<"\n";
return 0;
}
