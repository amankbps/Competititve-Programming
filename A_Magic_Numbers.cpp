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

string s;
cin>>s;
bool flag=0;
REP(i,0,s.size())
{
    if(s[i]=='1')
    continue;
   else if(((s[i]=='4'&& s[i-1]=='1')&& i-1>=0) || (s[i]=='4' && s[i-1]=='4' && s[i-2]=='1' && i-2>=0))
     continue;
     else
     {
         flag=1;
         break;
     }
}
if(flag==0)
cout<<"YES\n";
else
cout<<"NO\n";
return 0;
}
