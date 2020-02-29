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

    ll m,n;cin>>n>>m;
    while ( (m !=0 && n!=0) && ( (m >= 2*n)|| (n >= 2*m)))
    {

        if (m >= 2*n)
        {
            m = m%(2*n);
        }
        else if (n >= 2*m)
        {
            n=n%(2*m);
        }

    }
    cout<<n<<" "<<m<<endl;
    
    
        

    return 0;
}