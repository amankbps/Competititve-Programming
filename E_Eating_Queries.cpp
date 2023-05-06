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
    ll n,q;
    cin>>n>>q;
    vll v(n),pre(n);
    REP(i,0,n)
    {
        cin>>v[i];
        
    }
    sort(v.rbegin(),v.rend());
    REP(i,0,n)
    {
        pre[i]=v[i];
        if(i)
        pre[i]+=pre[i-1];
    }
    ll x;
    while(q--)
    {
        cin>>x;
        auto it=lower_bound(pre.begin(),pre.end(),x);
        if(it==pre.end())
        cout<<-1<<"\n";
       
        else
        {
            cout<<it-pre.begin()+1<<"\n"; 
        }

    }
}
return 0;
}
