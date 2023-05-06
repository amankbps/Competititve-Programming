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
    int a,b,ans1=0,ans2=0;
while(t--)
{
    cin>>a>>b;
    if(a==b)
     continue;
   if(a>b)
   ans1++;
   else
   ans2++;
}
if(ans1>ans2)
cout<<"Mishka\n";
else if(ans1<ans2)
cout<<"Chris\n";
else
cout<<"Friendship is magic!^^\n";
return 0;
}
