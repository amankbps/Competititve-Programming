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


int t;
cin>>t;
while(t--)
{
    ll n,k;
    cin>>n>>k;
    vll v(n);
    REP(i,0,n)
    cin>>v[i];
    sort(v.begin(),v.end());
    
   ll i=0,j=1;
   bool flag=0;
   while(j<n)
   {
       if((v[j]-v[i])==k)
       {
        flag=1;
        break;
       }
       else if((v[j]-v[i])<k)
        j++;
        else
        i++;
   }
   if(flag==1)
   cout<<"YES\n";
   else
   cout<<"NO\n";
}
return 0;
}
