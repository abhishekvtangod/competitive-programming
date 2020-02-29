// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)

typedef long long int ll;

int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll t;cin>>t;
    while(t--)
    {
        ll n,p,x;
        cin>>n>>p;
        vector<ll> v;
        while (n--)
        {
            cin>>x;
            if(p%x == 0)
                x=0;
            v.push_back(x);
        
        }
        
        
    }

    return 0;
}