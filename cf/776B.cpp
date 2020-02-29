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

    ll n;
    cin>>n;
    if(n > 2)
        cout<<"2\n";
    else
    {
        cout<<"1\n";
    }
    bool prime[n+3];
    memset(prime,true,sizeof(prime));
    prime[0] = prime[1] = false;
    
    for(ll i =2; i * i<= n+1; i++)
    {
        if(prime[i] == true)
        {    for(ll j = i*i; j<=n+1; j+=i )
                prime[j] = false;
        }
    }
    for(ll i = 2; i <=n+1 ; i++)
        if(prime[i])
            cout<<"1 ";
        else
        {
            cout<<"2 ";
        }
        

    return 0;
}