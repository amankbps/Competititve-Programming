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
    int n;
    cin>>n;
    vi alice(n);
    int maxAlice=INT_MIN;
    REP(i,0,n)
    {
        cin>>alice[i];
        maxAlice=max(maxAlice,alice[i]);
    }
    int m;
    cin>>m;
    vi bob(m);
    int maxbob=INT_MIN;
    REP(i,0,m)
    {
        cin>>bob[i];
        maxbob=max(maxbob,bob[i]);
    }
    if(maxAlice>=maxbob)
    cout<<"Alice\n";
    else 
    cout<<"Bob\n";
     if(maxAlice<=maxbob)
    cout<<"Bob\n";
    else 
    cout<<"Alice\n";
}
return 0;
}
