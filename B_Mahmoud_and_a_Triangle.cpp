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

bool check(ll a,ll b,ll c)
{
    if(a+b>c && b+c>a && a+c>b)
     return true;
     else
     return false;

}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);

ll n;
cin>>n;
vll v(n);
REP(i,0,n)
cin>>v[i];
sort(v.begin(),v.end());
bool flag=0;
REP(i,0,n-2)
{
    if(check(v[i],v[i+1],v[i+2]))
     {
         flag=1;
         break;
     }
}
if(flag==1)
cout<<"YES"<<"\n";
else
cout<<"NO"<<"\n";
return 0;
}
