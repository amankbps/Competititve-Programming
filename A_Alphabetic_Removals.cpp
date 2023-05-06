#include <bits/stdc++.h>
using namespace std;
#define REP(i,x,y) for(long long i=x;i<y;i++)
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define int long long
typedef long long ll;
typedef vector<int>  vi;
typedef vector<vi>  vvi;
typedef vector<ll>  vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;


signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);

int n,k;
cin>>n>>k;
string s;
cin>>s;

map<char,int>m;
for(auto it:s)
{
       m[it]++;
} 

for(char i='a';i<='z';i++)
{
       auto it=m.find(i);
       if(it!=m.end())
       {
           if(it->S<=k)
           {
              k-=it->S;
              m.erase(it);
           }
           else
           {
              it->S-=k;
              break;
           }
           
       }
}

reverse(s.begin(),s.end());
string ans="";
for(auto it:s)
{
    auto se=m.find(it);
    if(se!=m.end())
   { 
      ans+=it;
   if(se->S==1)
     m.erase(se);
     else
       se->S-=1;
   }

  
}
reverse(ans.begin(),ans.end());
cout<<ans;
return 0;
}
