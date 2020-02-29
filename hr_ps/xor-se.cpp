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

    ll t; cin>>t;
    while(t--)
    {
        ll n;cin>>n;ll r=0;
        for(ll i =0; i <n; i++)
        {
            ll x;cin>>x;
            if(i%2==0)
                r ^= x;
        }        
        if(!(n&1))
            cout<<"0\n";
        else
        {
            cout<<r<<endl;
        }
        
        
    }

    return 0;
}