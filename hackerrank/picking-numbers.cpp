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
    ll n,x;
    cin>>n;
    map<ll,ll> mp;
    while (n--)
    {
        cin>>x;
        mp[x]++;
    }
    if(mp.size() == 1)
    {
        cout<<mp.begin()->second<<endl;
        return 0;
    }
    vector<pair<ll,ll>> vp;
    ll sing_max = 0;
    for(auto it = mp.begin(); it != mp.end(); it++)
    {
        vp.push_back({it->first,it->second});
        if(sing_max < it->second)
        {
            sing_max = it->second;
        }
    }
    ll maxx = 0,max_a = 0,max_b=0;
    sort(vp.begin(),vp.end());
    
    for(auto it = vp.begin();it < vp.end()-1;it++)
    {
        if( (maxx < (it->second + (it+1)->second)) && abs(it->first - (it+1)->first) == 1 )
        {
            maxx = (it->second + (it+1)->second);
            max_a = it->first;
            max_b = it->first;

        }
        // cout<<(it->first - (it+1)->first)<<endl;
        
    }
    cout<<max(maxx,sing_max)<<endl;
    // for(auto it = mp.begin(); it != mp.end();it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    

    return 0;
}