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

int n,m;
cin>>n>>m;
vi v(m);
REP(i,0,m)
cin>>v[i];
sort(v.begin(),v.end());
int i=0,j=0;
int mini=INT_MAX;
while(j<m)
{
    if((j-i+1)<n)
    {
        j++;
    }
    if((j-i+1)==n)
    {
        mini=min(mini,(v[j]-v[i]));
        i++;
        j++;
    }
}
cout<<mini<<"\n";
return 0;
}
