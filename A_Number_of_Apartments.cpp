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
    ll n;
    cin>>n;
   if(n<3 || n==4)
   cout<<-1<<"\n";
   else if(n%3==0)
   cout<<n/3<<" 0 0\n";
   else if(n%3==1)
   cout<<n/3-2<<" 0 1\n";
   else
   cout<<n/3-1<<" 1 0\n";

}
return 0;
}
