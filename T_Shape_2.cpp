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
    REP(i,1,n+1)
    {
        REP(j,1,(2*n))
        {
            if(j>=(n+1-i) && j<=(n+i-1))
              cout<<"*";
            else if(j>(n+i-1))
             continue;
            else
          cout<<" ";
        }
        cout<<"\n";
    }

return 0;
}
