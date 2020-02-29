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

    ll n,x;cin>>n;
    set<ll, greater<ll>> s;
    // mp[0]=0;
    // mp[10e9]=0;
    while (n--)
    {
        cin>>x;
        s.insert(x);
    }
    vector<pair<ll,ll>> vp;
    ll ind = 1;
    for(auto it = s.begin(); it != s.end();it++,ind++)
    {
        vp.push_back({*it,ind});
    }
    vp.push_back({-1,ind});

    
    ll que;
    cin>>que;
    vector<ll> prs;
    vector<ll> fin;

    while (que--)
    {
        cin>>x;
        prs.push_back(x);

    }
    auto it = vp.begin();
        // cout<<it->first<<" "<<it->second<<endl;
        // cout<<prs[prs.size()-1]<<endl;
    for(ll i = prs.size()-1; i >=0; i--)
    {
        for(; prs[i] < it->first;it++);
        fin.push_back(it->second);

    }
    for(auto it = fin.end()-1;it >= fin.begin();it--)
    {
        cout<<*it<<endl;
    }
    



    return 0;
}