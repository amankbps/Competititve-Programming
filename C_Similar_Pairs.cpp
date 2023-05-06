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


void solve()
{
    int n;
    cin>>n;
    vi v(n);
    int cnte=0,cnto=0;
    REP(i,0,n)
    { 
        cin>>v[i];
         if(v[i]%2==0)
              cnte++;
        else
            cnto++;
    }
    
    if(cnte%2!=cnto%2)
    {
        cout<<"NO\n";
    }
    else
    {
        if(cnte%2==0)
        cout<<"YES\n";
        else
        {
            for(int i=0;i<n;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(v[i]%2!=v[j]%2 && abs(v[i]-v[j])==1)
                    {
                        cout<<"YES\n";
                         return;
                    }
                }
            }
            cout<<"NO\n";
        }
    }
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);



int t;
cin>>t;
while(t--)
{
   solve(); 
}
return 0;
}
