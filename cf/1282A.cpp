#include<bits/stdc++.h>
using namespace std; 
#define SWAP(x,y,t)t=x,x=y,y=t
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)

typedef long long int ll;

int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    ll n;
    cin>>n;
    while(n--)
    {
        ll a,b,c,r,t;
        cin>>a>>b>>c>>r;
        if(a>b)SWAP(a,b,t);
        ll left=c-r;
        ll right=c+r;
        ll ans=abs(b-a)+1;
        ll st=max(left,min(a,b));ll  ed=min(right,max(a,b));
        ans=abs(b-a)-max((ll)0,(ll)(ed-st));
        cout<<ans<<"\n";
        
    }

    return 0;
}