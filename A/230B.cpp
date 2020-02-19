// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)

typedef long long int ll;

bool isPrime(int n) 
{ 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
} 

int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll q;cin>>q;
    while (q--)
    {
        ll x;
        cin>>x;
        
        if(ceil(sqrt(x)) == floor(sqrt(x)) && x != 1)
        {   
            if(isPrime(sqrt(x)))
            {
            cout<<"YES\n";

            }
            else
            {
            cout<<"NO\n";
                
            }
            
        }
        else
            cout<<"NO\n";
        
    }
    

    return 0;
}