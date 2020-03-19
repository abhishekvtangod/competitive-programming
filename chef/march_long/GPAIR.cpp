// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)

typedef long long int ll;

bool isPrime(int n) 
{ 
    // Corner cases 
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

    ll t;cin>>t;
    while(t--)
    {    ll n;
        cin>>n;
        vector<ll> v;
        ll x;
        while(n--)
        {
            cin>>x;
            v.push_back(x);
        
        }
        ll count =0;
        for(ll i = 0;i < v.size()-1;i++)
        {
            for(ll j =i+1; j < v.size();j++)
            {
                x = v[i]+v[j];
                if(isPrime(x))
                {
                    count++;
                    // cout<<v[i]<<" "<<v[j]<<endl;
                }    
            }
        }
        cout<<count<<'\n';
    }   

    return 0;
}