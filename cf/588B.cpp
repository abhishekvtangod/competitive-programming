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
    vector<ll> v;
    for (int i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            // If divisors are equal, print only one 
            if (n/i == i) 
                v.push_back(i);
  
            else // Otherwise print both 
                v.push_back(i),v.push_back(n/i);
        } 
    } 
    sort(v.begin(),v.end());
    for(auto it2 = v.end()-1; it2 >= v.begin();it2--)
    {   
        ll flag = 0;
        for(auto it=(v.begin()+1); it != v.end();it++)
        {
            
            if(((*it2) % ((*it)*(*it))) == 0)
            {
                flag=1;
                break;
            }
        }
        if(flag == 0)
        {
            cout<<*it2<<endl;
            break;
        }
    }

    return 0;
}