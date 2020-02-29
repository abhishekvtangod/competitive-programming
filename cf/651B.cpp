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

    ll n,x;cin>>n;
    map<ll,ll> mp;
    ll larg_sec=0;
    for(ll i =0 ; i<n; i++)
    {
        cin>>x;
        mp[x]++;
        if(larg_sec< mp[x])
        {
            larg_sec = mp[x];
        }

    }
    cout<<n-larg_sec;
    

    return 0;
}