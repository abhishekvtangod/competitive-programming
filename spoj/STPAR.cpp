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
    ll n;cin>>n;
    while (n != 0)
    {
        ll x;
        vector<ll> v;
        stack<ll> side;
        for(ll i=0; i <n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        ll last = 0;
        for(ll i =0; i<n;i++)
        {
            while (side.size() && side.top() == last+1)
            {
                last++;side.pop();
            }
            
            if(v[i] != last+1)
                side.push(v[i]);
            else
            {
                last++;
            }
            
        }
        while (side.size() && side.top() == last+1)
        {
            last++;side.pop();
        }
        cout<<(last == n ? "yes":"no")<<endl;
        

        cin>>n;
    }
    
    return 0;
}