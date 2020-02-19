// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define as(n,a,b) assert(a<=n && n<=b);
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)

typedef long long int ll;
map<ll,ll> mp;

ll coin(ll n)
{
    if(mp[n]) return mp[n]; //O(1) -> querying a map
    if(n==0) return 0;
    mp[n] = max(n,coin(floor(n/2))+coin(floor(n/3))+coin(floor(n/4)));
    return max(n,coin(floor(n/2))+coin(floor(n/3))+coin(floor(n/4)));
    
}

int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll n;
    while (scanf("%lld",&n) != -1)
    {

        cout<<coin(n)<<endl;;

    }
    

    return 0;
}