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
    ios::sync_with_stdio (false); 
    cin.tie(nullptr);
 
    string s;cin>>s;
    ll n;cin>>n;
    ll dp[s.size()]={0};
    dp[0]=0;
    for(ll i = 1; i < s.size(); i++)
    {
        if(s[i] == s[i-1])
            dp[i] = dp[i-1]+1;
        else
        {
            dp[i]=dp[i-1];
        }
        
        // cout<<dp[i]<<" ";
    }
    // dp[s.size()-1] = dp[s.size()-2]+1;
    while (n--)
    {
        ll a,b;
        cin>>a>>b;
        cout<<dp[b-1]-dp[a-1]<<"\n";
    }
    
 
    return 0;
}