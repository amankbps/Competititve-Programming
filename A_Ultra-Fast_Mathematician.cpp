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

string s1,s2;
cin>>s1>>s2;
string ans="";
REP(i,0,s1.size())
 {
     if(s1[i]=='0' && s2[i]=='1' || s1[i]=='1' && s2[i]=='0')
       ans+='1';
       else
       ans+='0';
 }
 cout<<ans<<"\n";
return 0;
}
