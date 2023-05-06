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

ll n;
cin>>n;
vll v(n);
ll sum=0;
REP(i,0,n)
{
    cin>>v[i];
    sum+=v[i];
}
sort(v.rbegin(),v.rend());
ll cnt=1,ans=0;
for(auto i:v)
{
    ans+=i;
    if(ans>(sum-ans))
     break;

     cnt++;
   
}
cout<<cnt<<"\n";
return 0;
}
