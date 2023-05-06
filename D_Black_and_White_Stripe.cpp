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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int cnt=0;
    int ans=0;
    int i=0,j=0;
    while(j<n)
    {
         if(s[j]=='B')
            cnt++;
        if(j-i+1<k)
        {
           
            j++;
        }
       else if(j-i+1==k)
        {
            ans=max(cnt,ans);
            
            if(s[i]=='B')
            cnt--;
            i++;
            j++;
            
        }
        
    }
    if(ans==k)
    cout<<0<<"\n";
    else
    cout<<k-ans<<"\n";
}
return 0;
}
