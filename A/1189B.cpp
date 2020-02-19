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
    
    ll n,x;
    cin>>n;
    vector<ll> v;
    for(ll i = 0; i < n ; i++)
    {   
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    v.push_back(v[ceil(n/2-1)]);
    v.erase(v.begin()+ceil(n/2-1));
    ll flag = 0;
    for(ll i =0; i<v.size();i++)
    {
        if((v[i] >= v[(i+1)%n] + v[(i-1)%n]) )
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        cout<<"YES\n";
        for(auto it = v.begin(); it!=v.end();it++)
        {
            cout<<*it<<" ";
        }
    }
    else
    {
        cout<<"NO\n";
    }
    
    
    return 0;
}