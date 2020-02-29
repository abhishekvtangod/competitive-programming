// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a*b)/__gcd(a,b))

typedef long long int ll;

int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while (t--)
    {
        ll x,l,r;
        cin>>x>>l>>r;
        ll maxXor = 0;
        for(ll i = l; i<= r; i++)
        {
            maxXor = max(maxXor,x^i);
        }   
        cout<<maxXor<<endl;
    
    }
    
    
    return 0;
}