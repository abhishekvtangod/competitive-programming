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

    ll t;cin>>t;
    while (t--)
    {
        ll n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        // ll dp[s.size()+1]={1};
        vector<ll> dp(s.size(),0);
        dp.push_back(0);
        // dp[s.size()]=0;
        // dp[s.size()+1]=0;
        // memset(dp,0,s.size()+1);
        ll x;
        for(ll i =0;i < m; i++)
        {
            cin>>x;
            dp[x-1]+=1;
        }
        for(ll i =s.size()-1; i >=0; i--)
        {
            dp[i] += dp[i+1];
        }
        // for(ll i =s.size()-1; i >=0; i--)
        // {
        //     dp[i] += 1;
        // }
        // for(ll i =0; i <s.size(); i++)
        // {
        //     cout<<dp[i]<<" ";
        // }
        // cout<<endl;
        // map<char,ll> mp;
        ll mp[26]={0};
        // memset(mp,0,26);
        for(ll i =0; i <s.size(); i++)
        {
            mp[s[i]-'a']+=(dp[i]+1);
        }
        
        for(ll i = 0; i < 26; i++)
            cout<<mp[i]<<" ";
        cout<<"\n";
    }
        

    return 0;
}