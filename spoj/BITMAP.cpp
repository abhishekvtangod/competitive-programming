// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)

typedef long long int ll;

map<pair<ll,ll>,ll> adj;

int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll n,m,t,x;
    t=1;

    while (t--)
    {
        cin>>t>>n>>m;

        for(ll i =1; i<=n; i++)
        {
            for(ll j =1; j <= m;j++)
            {
                cin>>x;
                adj[{i,j}] = x; 

            }
        }



    }
    



    

    return 0;
}