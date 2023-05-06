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
    int a=0,j=s.size()-1;
    bool flag=0;
    REP(i,0,k)
    {
        if(s[a]!=s[j])
        {
            flag=1;
            break;
        }
        a++;j--;
    }
    if(flag==0 && n%2==0 && 2*k==n)
    cout<<"NO\n";
    else if(flag==0 )
    cout<<"YES\n";
    else
    cout<<"NO\n";
}
return 0;
}
