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
string ans="";
string pat="WUB";
bool flag=0;
REP(i,0,s.size())
{
    for(int j=0;j<3;j++)
    {
        if(s[i+j]!=pat[j])
         {
             flag=1;
             break;
         }
         
          
    }
    if(flag==0)
         {
             i+=2;
             if(ans[ans.size()-1]==' ' and ans.size()>1)
              continue;
              else
             ans+=' ';
         }
         else
        {ans+=s[i];
        flag=0;}
}
cout<<ans<<"\n";
return 0;
}
