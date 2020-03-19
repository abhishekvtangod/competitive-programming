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
    while(t--)
    {
        ll n,q;cin>>n>>q;
        ll x;
        vector<pair<ll,ll>> a;
        for(ll i=1;i<=n;i++)
        {
            cin>>x;
            a.push_back({i,x});
        }
        ll x1,x2,y;
        while(q--)
        {
            cin>>x1>>x2>>y;
                        


        }
    }
    

    return 0;
}