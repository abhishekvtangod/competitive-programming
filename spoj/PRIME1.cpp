// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define as(n,a,b) assert(a<=n && n<=b);
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
        ll a,b;
        cin>>a>>b;

        // SieveOfEratosthenes O(n*log(log(n)))
        vector<bool> prime(abs(a-b)+1,true);
        prime[0] = prime[1] = false;    
        for(ll i =2; i*i <=b; i++)
        {
            if(prime[i] == true)
            {
                for(ll j = i*i;j<=b; j += i)
                {
                    prime[j] = false;
                }
            }
        }
        

        for(ll i = a; i<= b; i++)
        {
            if(prime[i] == true)
            {
                cout<<i<<endl;
            }
        }
        cout<<endl;

    }


    return 0;
}