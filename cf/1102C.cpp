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
    ll n,x,y,in; 
    cin>>n>>x>>y;
    ll count=0;
    for(ll i =0;i<n;i++)
    {
        cin>>in;
        if(in <= x)
            count++;
    }
    if(x>y)
    {
        cout<<n;
        
    }
    else
    {
        cout<<(count+1)/2;
    }
    
    

    return 0;
}