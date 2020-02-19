// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a*b)/__gcd(a,b))

typedef long long int ll;

int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll t;cin>>t;
    while (t--)
    {
        ll n,a,b,k;
        cin>>n>>a>>b>>k;
        ll ans = (n/a)+(n/b)-2*(n/lcm(a,b));  // -2*x is because of principle of inclusion and exclusion i.e, when we do +n/a+n/b , multiples of both a,b r already in sum, to subtract that and original one it's -2*n/lcm(a,b)
        if(ans>= k)
            cout<<"Win\n";
        else
            cout<<"Lose\n";
    }
    

    return 0;
}