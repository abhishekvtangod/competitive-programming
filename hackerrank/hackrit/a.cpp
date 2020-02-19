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

    ll n,x,k=0;cin>>n;
    vector<ll> v;
    ll zer = 0;
    ll ind = 0;
    while (n--)
    {

        cin>>x;
        v.push_back(x);
        k++;
        if(x == 0)
        {
            zer++;
        }
        if(x < 0)
        {   
            
            ind = k;
        }
        

    }

        

    return 0;
}