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
int n,cnt=0;
cin>>n;
string s;
cin>>s;
map<char,int>m;

for(int i=0;i<s.size();i+=2)
{
   m[s[i]]++;
   auto it=m.find((s[i+1]+32));
   if(it!=m.end())
   {
       if(it->S>1)
       it->S-=1;
       else
       m.erase(it);
   }
 else
  cnt++;
    
}

cout<<cnt<<"\n";
return 0;
}
