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

    ll n,x,y;
    cin>>n>>x>>y;
    vector<ll> v;
    while (n--)
    {
        ll x;cin>>x;
        v.push_back(x);
    }
    if(y > x)
    {
        cout<<"0\n";
    }
    else
    {
        
    }
    
    
    return 0;
}