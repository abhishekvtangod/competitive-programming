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
        for(ll i= 0;i < n;i++)
        {
            cin>>x;
            a.push_back(x);
        }
        while (q--)
        {
            ll odd=0,even=0;
            cin>>p;
            for(int i =0; i<n;i++)
            {
                x = p^a[i];
                if(!(bits(x)%2))
                {
                    even++;
                }
                else
                {
                    odd++;
                }
                
            }
            cout<<even<<" "<<odd<<'\n';
        }
        
    
    }
    
    

    return 0;
}