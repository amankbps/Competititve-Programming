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
    int n=s.size();
    int sum[n];
    sum[0]=0;
    REP(i,1,n)
    {
        sum[i]=sum[i-1];
        if(s[i]==s[i-1])
          sum[i]++;

    }
    int m;
    cin>>m;
    int a,b;
    while(m--)
    {
        cin>>a>>b;
        cout<<sum[b-1]-sum[a-1]<<"\n";
    }

return 0;
}
