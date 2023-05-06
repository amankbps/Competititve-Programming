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

ll a,b,c,d;
cin>>a>>b>>c>>d;
if(a<c)
{
    if(b<c)
    cout<<-1<<"\n";
    else if(b==c)
    cout<<b<<" "<<c<<"\n";
    else if(b>c && b<d)
    cout<<c<<" "<<b<<"\n";
    else
    cout<<c<<" "<<d<<"\n";
}
else
{
     if(d<a)
    cout<<-1<<"\n";
    else if(d==a)
    cout<<d<<" "<<a<<"\n";
    else if(d>a && d<b)
    cout<<a<<" "<<d<<"\n";
    else
    cout<<a<<" "<<b<<"\n";
}

return 0;
}
