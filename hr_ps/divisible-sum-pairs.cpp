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

    ll n,k;cin>>n>>k;
    vector<int> v;
    while (n--)
    {
        ll x;cin>>x;
        v.push_back(x);
    }
    ll count=0;
    for(ll i =0; i < v.size()-1;i++)
    {
        for(ll j = i; j < v.size();j++)
        {
            if(i<j && ((v[i]+v[j])%k==0))
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
    

    return 0;
}