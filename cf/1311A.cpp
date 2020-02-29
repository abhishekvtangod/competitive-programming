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

    ll t;cin>>t;
    for(ll i =0; i<t; i++)
    {
        ll a,b;
        cin>>a>>b;

        ll x = b-a;
        if(x == 0)
            cout<<"0\n";
        else if(x>0)
        {
            if(x%2 == 0)
            {
                cout<<"2\n";
            }
            else
            {
                cout<<"1\n";
            }
            
        }
        else
        {
            if(abs(x)%2 == 0)
                cout<<"1\n";
            else
            {
                cout<<"2\n";
            }
            
        }
        
        

    }

    return 0;
}