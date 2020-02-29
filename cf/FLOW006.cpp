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

    ll q;cin>>q;
    while (q--)
    {
        ll n,s=0;
        cin>>n;
        while (n)
        {
            s+= n%10;
            n/=10;
        }
        cout<<s<<endl;
        
    }
    

    return 0;
}