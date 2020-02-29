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

    ll t;cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll count=0;
        // for(ll i = a; i <= b; i++)
        // {
        //     if(ceil(sqrt(i)) == floor(sqrt(i)))
        //         count++;
        // }
        count = floor(sqrt(b))-ceil(sqrt(a))+1;
        cout<<count<<endl;
    }

    return 0;
}