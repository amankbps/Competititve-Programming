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

bool distinct(string &s)
{
    REP(i,0,s.size()-1)
    {
        REP(j,i+1,s.size())
        {
            if(s[i]==s[j])
             return false;
        }
    }
    return true;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);

string s;
cin>>s;
ll n=stoi(s);
for(ll i=n+1;;i++)
{
    string p=to_string(i);
    if(distinct(p))
    {
        cout<<p;
        break;
    }
}

return 0;
}
