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
vi a(n);
REP(i,0,n)
cin>>a[i];
int m;
cin>>m;
vi b(m);
REP(i,0,m)
cin>>b[i];
map<int,int>mi;
REP(i,0,n)
{
    REP(j,0,m)
    {
        if(b[j]%a[i]==0)
        {
            int r=b[j]/a[i];
            mi[r]++;
        }
    }
}
auto it=mi.rbegin();
cout<<it->S<<"\n";
return 0;
}
