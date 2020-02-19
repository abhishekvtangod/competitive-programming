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

    ll n; cin>>n;
    vector<ll> v;
    while (n--)
    {
        ll x;cin>>x;
        v.push_back(x);
    }
    ll time = 0;
    auto it = v.begin();
    for(time = *it; it < v.end()-1 ; it++)
    {
        
        time += abs(*it-*(it+1));
    }
    cout<<time+2*v.size()-1<<endl;
    

    return 0;
}