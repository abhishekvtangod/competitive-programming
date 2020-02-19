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

    ll t;cin>>t;
    while(t--)
    {
        ll n,x;cin>>n;
        vector<ll> a,b;
        for(ll i=0; i <n; i++)
        {
            cin>>x;
            a.push_back(x);
        }
        for(ll i=0; i <n; i++)
        {
            cin>>x;
            b.push_back(x);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        ll sum = 0;
        for(ll i=0; i <n; i++)
        {
            if(a[i]>b[i])
            {
                sum+=b[i];
            }
            else
            {
                sum+=a[i];
            }
            
        }    
        cout<<sum<<endl;
    
    }

    return 0;
}