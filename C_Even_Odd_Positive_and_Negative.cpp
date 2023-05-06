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
int a;
int even=0,odd=0,pos=0,neg=0;
REP(i,0,n)
{cin>>a;
  if(a%2==0)
   even++;
   if(abs(a)%2==1)
   odd++;
   if(a>0)
   pos++;
   if(a<0)
   neg++;
}
cout<<"Even: "<<even<<"\n";
cout<<"Odd: "<<odd<<"\n";
cout<<"Positive: "<<pos<<"\n";
cout<<"Negative: "<<neg<<"\n";
return 0;
}
