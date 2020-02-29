// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)

typedef long long int ll;
ll countSetBits(ll n)
{
    ll c = 0,p=1;
    while (n>=p)
    {
        if(n&1<<p)c++;
        p++;
    }
    

    return c;
}

int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> v;
    for(ll i= 0; i <= m ;i++)
    {
        ll x;cin>>x;
        v.push_back(x);
    }
    ll key = *(v.end()-1);
    ll xr;
    ll count = 0;
    for(ll i = 0; i < m; i++)
    {
        xr = key^v[i];
        if(countSetBits(xr)<=k)
        {
            count++;
            // cout<<v[i]<<endl;   
        }
    }
    cout<<count<<endl;

    return 0;
}