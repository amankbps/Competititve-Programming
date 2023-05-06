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
vi a(n),b(n);
REP(i,0,n)
cin>>a[i];
REP(i,0,n)
cin>>b[i];
sort(a.begin(),a.end());
sort(b.begin(),b.end());
bool flag=0;
REP(i,0,n)
{
    if(a[i]!=b[i])
    {
        flag=1;
        break;
    }
}
if(flag==0)
cout<<"yes\n";
else
cout<<"no\n";
return 0;
}
