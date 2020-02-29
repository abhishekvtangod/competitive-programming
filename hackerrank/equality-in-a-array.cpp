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

    ll t,x;cin>>t;
    map<ll,ll> mp;
    for(int i = 0; i < t;i++)
    {
            cin>>x;
            mp[x]++;
    }    
    ll max = 0;
    for(auto it = mp.begin(); it != mp.end(); it++)
    {
            if(max < it->second)
            {
                    max = it->second;
            }
    }
    cout<<t-max;

    return 0;
}