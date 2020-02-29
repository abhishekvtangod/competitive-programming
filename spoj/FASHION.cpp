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
            ll x;

        ll n;
        cin>>n;
        vector<ll> m,w;
        for(ll i =0; i < n; i++)
        {
            cin>>x;
            m.push_back(x);
        }
        
        for(ll i =0; i < n; i++)
        {
            cin>>x;
            w.push_back(x);
        }
        ll sum = 0;
        sort(m.begin(),m.end());
        sort(w.begin(),w.end());
        
        for(ll i =0; i < n; i++)
        {
            sum += m[i]*w[i];
        }
        cout<<sum<<endl;
    }

    return 0;
}