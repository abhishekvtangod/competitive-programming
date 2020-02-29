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

    ll n;cin>>n;
    ll ans=0;
    for(ll i = 1; i <= (ll)sqrt(n); i++)
    {
        if((n/i) > (i-1))
            ans += (ll)n/i-(i-1);
        else
        {
            break;
        }
        
    }

    cout<<ans;
    return 0;
}