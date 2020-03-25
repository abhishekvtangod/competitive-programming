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
    while(t--)
    {
        ll n;cin>>n;
        string s;cin>>s;
        map<char,ll> mp;
        char prev1,prev2;

        if(s.size())
        {
            prev1=s[0];
            if(prev1 == 'L' || prev1 == 'R')
            {
                prev1 = 'R';
                prev2 = 'L';
            }
            else
            {
                prev1 = 'D';
                prev2='U';
            }
            
            mp[s[0]]++;
        }
        for(ll i=1; i<n;i++)
        {
            if((s[i] != prev1) && (s[i] != prev2))
            {    mp[s[i]]++;
            }
            prev1=s[i];
            if(prev1 == 'L' || prev1 == 'R')
            {
                prev1 = 'R';
                prev2 = 'L';
            }
            else
            {
                prev1 = 'D';
             
                prev2= 'U';
            }
            
        }
        ll y = mp['U'] - mp['D'];
        ll x = mp['R'] - mp['L'];
        cout<<x<<" "<<y<<'\n';
        // cout<<endl;
        // for(auto it=mp.begin();it!=mp.end();it++)
        //     cout<<it->first<<" "<<it->second<<endl;
        //     cout<<"------\n";
        
    }
    

    return 0;
}










