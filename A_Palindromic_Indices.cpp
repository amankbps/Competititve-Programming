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
    string s;
    cin>>s;
    int cnt=1;
    int mid=n/2;
    
    REP(i,mid,s.size())
    {
        if(i<n && s[mid]==s[i+1])
         cnt++;
         else
         break;

    }
   for(int i=mid;i>=0;i--)
    {
        if(i>0 && s[mid]==s[i-1])
         cnt++;
         else
         break;

    }
    cout<<cnt<<"\n";
}
return 0;
}
