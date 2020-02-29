// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define as(n,a,b) assert(a<=n && n<=b);
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)

typedef long long int ll;

int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll n;cin>>n;
    map<ll,ll> mp;
    while(n--)
    {
        ll x;cin>>x;
        mp[x]++;
    }
    ll pairs=0;
    for(auto it = mp.begin(); it != mp.end(); it++)
    {
        pairs+= it->second/2;
    }
    cout<<pairs;

    return 0;
}