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
    vector<ll> bill;
    ll sum = 0;
    for(ll i =0; i < n; i++)
    {
        ll x;cin>>x;
        if(i == k)
            continue;
        
        sum += x;
    }
    ll b;cin>>b;
    
    double anna_bill = sum/2;
    if(b <= anna_bill)
        cout<<"Bon Appetit";
    else
    {
        cout<<abs(anna_bill-b);
    }
    


    return 0;
}