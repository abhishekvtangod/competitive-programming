// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)

typedef long long int ll;

vector<ll> factors(ll x)
{
    vector<ll> vec;

    for(ll i = 1; i<=sqrt(x);i++)
    {
        if(x%i==0)
        {
            vec.push_back(i);
            if(i!=x/i)
                vec.push_back(x/i);
        }
    }
    cout<<endl;

    // for(auto it = vec.begin(); it != vec.end(); it++)
    // {
    //     cout<<*it<<" ";
    // }    
    cout<<endl;

    return vec;
}

int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll q;cin>>q;
    while(q--)
    {
        ll a,b;
        cin>>a>>b;
        ll x = abs(a-b);
        vector<ll> v = factors(x);
        cout<<v.size()<<endl;
    }

    return 0;
}