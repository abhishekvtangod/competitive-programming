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
        ll c,d,l;
        cin>>c>>d>>l;
        if(((l > d*4+4*c) || (l < 4*d+4*((c-2*d>0)?(c-2*d):0))) || (l%4 != 0))
            cout<<"no\n";
        else
        {
            cout<<"yes\n";   
        }
        
    }

    return 0;
}