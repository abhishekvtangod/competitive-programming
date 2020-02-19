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
    map<ll,ll> mp;
    ll n;cin>>n;
    while(n--)
    {
        ll x;
        cin>>x;
        mp[x]++;
    }

    ll max = 0,max_el=mp.begin()->first;
    for(auto it = mp.begin(); it != mp.end(); it++)
    {
        if(max < it->second)
        {
            max = it->second;
            max_el = it->first;
        }
    }    
    
    
    // for(auto it=mp.begin(); it != mp.end(); it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    cout<<max_el;

    return 0;
}