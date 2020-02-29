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

    ll n;
    cin>>n;
    ll ans=19;
    for(ll i = 1; i < n;)
    {
        
        ans += 9;
        ll temp=ans,s=0;
        while (temp)
        {
            s+=temp%10;
            temp/=10;
        }
        if(s == 10)i++;
        
    }
    cout<<ans;
    return 0;
}