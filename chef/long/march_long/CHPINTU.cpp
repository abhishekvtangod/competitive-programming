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
        ll n,m;cin>>n>>m;
        ll x;
        vector<ll> f,p;
        for(ll i=0;i<n;i++)
        {
            cin>>x;
            f.push_back(x);

        }
        for(ll i=0;i<n;i++)
        {
            cin>>x;
            p.push_back(x);

        }
        map<ll,ll> mp;
        for(ll i=0;i<n;i++)
        {
            mp[f[i]]+=p[i];
        }
        ll mn=INFINITY;
        for(auto it=mp.begin(); it != mp.end(); it++)
            mn = min(mn,it->second);
        cout<<mn<<'\n';

    }
    
    
    return 0;
}