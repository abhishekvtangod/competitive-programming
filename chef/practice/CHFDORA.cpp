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

    ll t;cin>>t;
    while (t--)
    {
        ll n,m;cin>>n>>m;
        ll ans = n*m;
        ll arr[n][m];
        for(ll i = 0; i < n; i++)
        {
            for(ll j = 0; j < m ; j++)
            {
                cin>>arr[i][j];
            }
        }

        for(ll i = 1; i < n-1; i++)
        {
            for(ll j = 1; j < m-1 ; j++)
            {
                for(ll k = 1;(k <= min(m,n)/2) && (); k++)
                {
                    // if()
                    ans++;
                }
            }
        }

        
        
    }
    
    

    return 0;
}