// [abhishekvtangod]
// g++ -Wall -Wextra -Wshadow filename.cpp
#include<bits/stdc++.h>
using namespace std; 

#define mod 1000000007
#define gcd(a,b) __gcd(a,b)

typedef long long int ll;

int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    ll t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        map<char,ll> mp;
        for(int i =0; i< s.size();i++)
        {
            mp[s[i]]++;
        }
        ll sum=0;
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            sum += ceil(it->second/2.0);
            // cout<<it->first<<" "<<it->second<<endl;
        }
        cout<<sum<<endl;

    }

    return 0;
}