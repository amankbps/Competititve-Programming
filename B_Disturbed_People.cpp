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

int n;
cin>>n;
vi v(n);
REP(i,0,n)
cin>>v[i];

int cnt=0;
REP(i,1,n)
{
    if((v[i-1]==1 && v[i]==0 && v[i+1]==1)&& i+1<n )
    {
        cnt++;
        i+=2;
    }
}
cout<<cnt<<'\n';
return 0;
}