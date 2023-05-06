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
    char a[8][8];
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
         cin>>a[i][j];
    }
   vi cnt;
    for(int i=0;i<8;i++)
    {   int c=0;
        for(int j=0;j<8;j++)
        {
             if(a[i][j]=='#')
             {
              c++;
             }
        }
        cnt.eb(c);
    }
    int ans=0;
    for(int i=0;i<cnt.size()-1;i++)
    {
           if(cnt[i]<cnt[i-1] && cnt[i]<cnt[i+1] && i>0)
             ans=i;
    }
    for(int i=0;i<8;i++)
    {
          if(a[ans][i]=='#')
          {
            cout<<ans+1<<" "<<i+1<<"\n";
            break;
          }
    }
}
return 0;
}
