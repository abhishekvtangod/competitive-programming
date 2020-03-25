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

    ll n;
    cin>>n;
    vector<ll> v,w;
    ll x;
    ll L = n;
    while (n--)
    {
        cin>>x;
        v.push_back(x);
    }
    while (L--)
    {
        cin>>x;
        w.push_back(x);
    }
    sort(v.begin(),v.end());
    sort(w.begin(),w.end());
    ll ans=0;
    for(ll i=0; i < v.size();i++)
    {
        ans+=abs(v[i]-w[i]);
    }
    cout<<ans;
    

    return 0;
}