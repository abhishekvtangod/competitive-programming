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

    ll t;
    cin>>t;
    while (t--)
    {
        ll n,k;cin>>n>>k;
        unordered_map<ll,ll> mp;
        ll x;
        ll ans=0;
        for(ll i=0; i < n;i++)
        {
            cin>>x;
            mp[x]++;
            
            if(mp[x+1] == 0)
                ans++;
            else
            {
                mp[x+1]--;
            }
            


        }
        if(k-ans<0)
            cout<<"-1\n";
        else
        {
            cout<<k-ans<<'\n';
        }
        
        
        

    }
    
    

    return 0;
}