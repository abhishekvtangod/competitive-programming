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
    ll n,y,k;
    cin>>y>>k>>n;
    ll flag = 0;
    // for(ll i = 1; i <= (n-y); i++)
    // {
    //     flag = 1;
    //     if((i+y)%k == 0)
    //         cout<<i<<" ";
    
    // }
    ll x=(n-(n%k))-y;
    vector<ll> v;
    // cout<<endl<<x<<endl;
    for(ll i = x ; i > 0 ; i-=k)
    {
        flag = 1;
        v.push_back(i);

    }
    if(v.size()>0)
    for(auto it = v.end()-1; it >=v.begin();it--)
    {
        cout<<*it<<" ";
    }
    
    if(!flag)
        cout<<"-1\n";

    

    return 0;
}