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

    ll n;cin>>n;
    while(n--)
    {

        map<char,ll> mp;
        char x;
        ll q=3;
        while(q--)
        {
            cin>>x;
            mp[x]++;
        }
        if(mp.size() == 3)
            cout<<"YES\n";
        else
        {
            cout<<"NO\n";
        }

    }
    
    

    return 0;
}