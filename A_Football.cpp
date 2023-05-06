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
int cnt1=1,cnt0=1;
int ans0=INT_MIN;
int ans1=INT_MIN;
REP(i,0,s.size()-1)
{
    if(s[i]=='0' && s[i+1]=='0')
    {
        cnt0++;
    }
    else
    {
         ans0=max(cnt0,ans0);
         cnt0=1;
    }
    if(s[i]=='1' && s[i+1]=='1')
    {
        cnt1++;
    }
    else
    {
         ans1=max(cnt1,ans1);
         cnt1=1;
    }
}
ans0=max(cnt0,ans0);
ans1=max(cnt1,ans1);
if(ans0>=7 || ans1>=7)
cout<<"YES\n";
else
cout<<"NO\n";
return 0;
}
