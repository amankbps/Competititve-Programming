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

int n;
cin>>n;
vi v(n);
map<int,int>m;
set<int>s;
REP(i,0,n)
{
    cin>>v[i];
   m[v[i]]++;
   s.insert(v[i]);
}
while(m.size())
{
    for(auto &i:s)
    {
       auto it=m.find(i);
       if(it!=m.end())
       { 
       cout<<i<<" ";
       if(it->S==1)
       m.erase(it);
       else
       {
        it->S--;
       }
       
       }
    }
    cout<<"\n";
}
return 0;
}
