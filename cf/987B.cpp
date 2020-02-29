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

    ll x,y;
    cin>>x>>y;
    if((y*log(x)) == (x*log(y)))
    {
        cout<<"=";
    }
    else if ((y*log(x)) < (x*log(y)))
    {
        cout<<"<";
    }
    else
    {
        cout<<">";
    }
    
    

    return 0;
}