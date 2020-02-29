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

    ll n;cin>>n;
    char x;
    vector<char> v;
    while (n--)
    {
        cin>>x;
        v.push_back(x);
    }
    map<string,ll> mp;
    string s;
    for(ll i =0; i < v.size()-1; i++)
    {
        s = v[i];
        s += v[i+1];

        mp[s]++;
        // cout<<s<<endl;
    }
    ll mx = 0;
    for(auto it = mp.begin(); it != mp.end(); it++)
    {
        if(mx < it->second)
        {
            mx = it->second;
            s = it->first;
        }
    }
    cout<<s;
        

    return 0;
}