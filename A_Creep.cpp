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
    int a,b;
    cin>>a>>b;
    
    string s="";
    int i=0;
    while(a && b)
    {
         if(i%2==0)
         {
            s+='0';
            a--;
         }
         else
         {
            s+='1';
            b--;
         }
        i++; 
    }
    while(a)
    {
        s+='0';
        a--;
    }
    while(b)
    {
        s+='1';
        b--;
    }
   cout<<s<<"\n";
}
return 0;
}
