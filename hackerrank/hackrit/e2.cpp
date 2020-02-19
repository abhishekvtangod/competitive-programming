// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a*b)/__gcd(a,b))

typedef long long int ll;

int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
ll t;cin>>t;
while(t--)
{
    ll x,l,r;
    cin>>x>>l>>r;
    ll xr = 0;
    for(ll i = log2(r) ; i>=0; i--)
    {
        if(x & (1<<i))  //set bit
        {
            if((xr>r) || (xr+(1<<i)-1<l))
                xr^=(1<<i);
        }
        else //unset
        {
            if(((xr^(1<<i)) <= r))
            {
                xr^=(1<<i);
            }
        // cout<<xr<<" "<<i<<endl;   

        }
    }
    cout<<(xr^x)<<endl;}

    return 0;
}