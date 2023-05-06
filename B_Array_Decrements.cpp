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
    ll cnt=0;
    vll a(n),b(n);
    REP(i,0,n)
    cin>>a[i];
    REP(i,0,n)
   {cin>>b[i];
      if(b[i]==0)
      cnt++;
   }
   

   set<ll>s,z;
 bool f=0;
    REP(i,0,n)
    {
         if(b[i]==0)
          z.insert(a[i]);
        if(a[i]==0 && b[i]!=0)
        {
            f=1;
            break;
        }
        if(a[i]>=b[i])
        s.insert(a[i]-b[i]);
        else
        {
            f=1;
            break;
        }
        
       
    }
   
    if(n==1 && a[0]<b[0] )
    cout<<"NO\n";
    else if(n==1 &&(a[0]>=b[0] || b[0]==0) )
    cout<<"YES\n";
   else if(f==1)
    cout<<"NO\n";
    else if(s.size()==1 || ((cnt>0) && z.size()==1) )
    cout<<"YES\n";
    else
    cout<<"NO\n";
}
return 0;
}
