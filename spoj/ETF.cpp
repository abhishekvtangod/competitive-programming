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
        ll n;cin>>n;
        float result = n; // Initialize result as n 
    
        // Consider all prime factors of n and for every prime 
        // factor p, multiply result with (1 - 1/p) 
        for (int p = 2; p * p <= n; ++p) { 
            
            // Check if p is a prime factor. 
            if (n % p == 0) { 
                
                // If yes, then update n and result 
                while (n % p == 0) 
                    n /= p; 
                result *= (1.0 - (1.0 / (float)p)); 
            } 
        } 
    
        // If n has a prime factor greater than sqrt(n) 
        // (There can be at-most one such prime factor) 
        if (n > 1) 
            result *= (1.0 - (1.0 / (float)n)); 
    
        cout<<(int)result<<endl; 
    }

    return 0;
}