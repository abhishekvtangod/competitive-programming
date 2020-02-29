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

    ll n,x;cin>>n;
    vector<ll> v;
    for(ll i =0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());
    // for(auto it = v.begin();it != v.end(); it++)
    //     cout<<*it<<" ";
    vector<ll> a,b;
    for(ll i =0 ; i<n; i++)
    {
        if(!(i%2))
            a.push_back(v[i]);
        else
            b.push_back(v[i]);
    }
    reverse(b.begin(),b.end());
    
    for(auto it = b.begin();it != b.end(); it++)
    {
        a.push_back(*it);
    }
    for(ll i = 0; i<n; i++)
    {
        if((a[(i+1)%n]+a[(i-1)%n]) <= a[i])
        {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    for(auto it = a.begin();it!=a.end();it++)
    {
        cout<<*it<<" ";
    }


    return 0;
}