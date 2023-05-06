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
    string s;
    cin>>s;
    bool f=0;
    int sum=0;
    REP(i,0,s.size())
    {
        if(s[i]=='A')
        sum++;
        else
        sum--;
        if(sum<0)
        f=1;
    }
    if(s=="A" || s=="B")
     cout<<"NO\n";
     else if(f==0 && s[s.size()-1]=='B')
     cout<<"YES\n";
     else
     cout<<"NO\n";
}
return 0;
}
