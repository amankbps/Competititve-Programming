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

int n,p=0;
cin>>n;
if(n<=5)
{ 
if(n==1)
cout<<"Sheldon\n";
else if(n==2)
cout<<"Leonard\n";
else if(n==3)
cout<<"Penny\n";
else if(n==4)
cout<<"Rajesh\n";
else
cout<<"Howard\n";
}
else{ 
while(5*pow(2,p)<=n)
{
    n-=5*pow(2,p);
    p++;
}
int res=n/pow(2,p);
if(res==0)
cout<<"Sheldon\n";
else if(res==1)
cout<<"Leonard\n";
else if(res==2)
cout<<"Penny\n";
else if(res==3)
cout<<"Rajesh\n";
else
cout<<"Howard\n";
}

return 0;
}
