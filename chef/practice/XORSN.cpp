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
    while(t--)
    {
        ll n;cin>>n;
        if(n%4 == 0)
            cout<<n<<endl;
        else if (n%4 == 1)
        {
            cout<<"1"<<endl;
        }
        else if (n%4 == 2)
        {
            cout<<n+1<<endl;
        }
        else if (n%4 == 3)
        {
            cout<<"0"<<endl;
        }
        
        
        
    }   

    return 0;
}