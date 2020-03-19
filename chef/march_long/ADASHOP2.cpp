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


    ll t;cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        vector<pair<ll,ll>> v;
        // if(a != 1 && b!= 1)
        // {
            v.push_back({(a+b)/2,(a+b)/2});
            v.push_back({1,1});

        // }
        for(ll i = 4; i <= 8; i+=2)
        {
            v.push_back({i/2,i/2});
            v.push_back({1,i-1});
            v.push_back({i-1,1});
            v.push_back({i/2,i/2});
        }
            
        
        for(ll i = 10; i <=16 ;i+=2)
        {
            v.push_back({i/2,i/2});
            v.push_back({i-8,8});
            v.push_back({8,i-8});
            v.push_back({i/2,i/2});

        }
        cout<<v.size()<<'\n';
        for(auto u:v)
        {
            cout<<u.first<<" "<<u.second<<'\n';
        }
    }
    return 0;
}