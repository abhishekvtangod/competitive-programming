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
    v.push_back(0);
    for(ll i = 1;i <= n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    ll q;cin>>q;
    vector<ll> dp;
    dp.push_back(0);
    for (ll i = 1; i <= n; i++)
    {
        dp.push_back(dp[i-1]+v[i]);
    }

    sort(v.begin(),v.end());
    vector<ll> sort_dp;
    sort_dp.push_back(0);

    for (ll i = 1; i <= n; i++)
    {
        sort_dp.push_back(sort_dp[i-1]+v[i]);
    }


    // for (ll i = 0; i <= n; i++)
    // {
    //     cout<<sort_dp[i]<<" ";
    // }   
    // cout<<endl;


    while (q--)
    {   ll sum=0;
        ll l,r;
        cin>>x>>l>>r;
        if(x == 1)
        {    
            cout<<dp[r]-dp[l-1]<<endl;
        }
        else if (x==2)
        {
            cout<<sort_dp[r]-sort_dp[l-1]<<endl;
            
        }
        // cout<<sum<<endl;
    }
    
    
    

    return 0;
}