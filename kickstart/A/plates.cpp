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

    //pop and add element from max sum stack

    ll t; cin>>t;
    for(ll tt = 1; tt<=t; tt++)
    {
        ll n,k,p;
        cin>>n>>k>>p;
        vector<ll> v[n];
        vector<ll> sum;
        ll x,sm;
        ll mx=0;
        for(ll i= 0; i < n; i++)
        {
            sm = 0;
            for(ll j =0; j < k; j++)
            {
                cin>>x;
                v[i].push_back(x);
                sm+=x;
            }
            sum.push_back(sm);
            mx = max(mx,sm);
        }
        for(ll i =0; i < p; i++)
        {
            auto it = find(sum.begin(),sum.end(),sm);
            cout<<index<<"\n";

        }
    }

    return 0;
}