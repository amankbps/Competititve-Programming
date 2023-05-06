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
    ll n;
    cin>>n;
    bool flag=0;
    int cnt=0;
    while(n>1)
    {
        if(n%6==0)
        n/=6;
        else if(n%3==0)
        n*=2;
        else
        {
            flag=1;
            break;
        }
      cnt++;
    }
    if(flag==1)
    cout<<-1<<"\n";
    else
    cout<<cnt<<"\n";
}
return 0;
}
