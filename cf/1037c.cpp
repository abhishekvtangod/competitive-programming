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
    // vector<ll> a,b;
    // for(ll i =0; i < n; i++)
    // {
    //     cin>>x;
    //     a.push_back(x);
    // }   
    string a,b;cin>>a>>b;
    ll cnt=0;
    ll dp[n];
    for(ll i =0; i < n; i++)   
    {
        if(a[i] != b[i])
            cnt++;

        if(a[i] == b[i])
            dp[i] = 0;
        else if (a[i] > b[i])
        {
            dp[i]=1;
        }
        else
        {
            dp[i] = -1;
        }
        
        
    }
    for(ll i =0; i < n-1; i++)
    {
        if(dp[i]*dp[i+1] == -1)
        {
            cnt-=1;
            i++;
        }
    }
    cout<<cnt;
    return 0;
}