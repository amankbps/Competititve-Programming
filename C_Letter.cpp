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

string s1,s2;
getline(cin,s1);
getline(cin,s2);
map<char,int>m;

for(auto it:s1)
 m[it]++;

 bool flag=0;
 for(auto it:s2)
 {
    if(it==' ')
    continue;
    auto se=m.find(it);
    if(se!=m.end())
    {
        if(se->S==1)
        m.erase(se);
        else
        {
            se->S--;
        }
        
    }
    else
    {
        flag=1;
        break;
    }
    

 }
if(flag==0)
cout<<"YES\n";
else
{
    cout<<"NO\n";
}


return 0;
}
