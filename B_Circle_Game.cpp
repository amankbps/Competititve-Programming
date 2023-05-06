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
    vi v(n);
    REP(i,0,n)
    cin>>v[i];
    if(n%2==0)
    {

       int mini=INT_MAX;
       int ind;
       REP(i,0,n)
       {
          if(v[i]<mini)
          {
            mini=v[i];
            ind=i;
          }
       }
       if(ind%2==0)
       {
         cout<<"Joe\n";
       }
       else
       {
        cout<<"Mike\n";
       }
       

  }

    else
    {
        cout<<"Mike\n";
    }
    
}
return 0;
}
