// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)

typedef long long int ll;

int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll t;cin>>t;
    while (t--)
    {
        ll n,q;cin>>n>>q;
        ll p;vector<ll> a;
        ll x;
        ll odd=0,even=0;
        
        for(ll i= 0;i < n;i++)
        {
            cin>>x;
            if(!(bits(x)%2))
            {
                even++;
            }
            else
            {
                odd++;
            }
            
        }
        while (q--)
        {
            cin>>p;
            ll cnt = bits(p);
            ll a=0,b=0;
            if(!(cnt%2))
            {
                a = even;
                b = odd;
            }
            else
            {
                a = odd;
                b = even;
            }
            
            
            
                
            cout<<a<<" "<<b<<'\n';
        }
        
    
    }
    
    

    return 0;
}