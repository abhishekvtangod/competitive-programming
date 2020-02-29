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
    // vector<ll> v;
    map<ll,ll> mp;

    for(ll i =0; i <n; i++)
    {
        cin>>x;
        // v.push_back(x);
        mp[x]++;
    }
    if(mp.size() == 1)
    {
        cout<<(mp.rbegin()->first)
                -(mp.begin()->first)<<" ";
    cout<<((mp.begin()->second)*((mp.rbegin()->second)-1))/2;

        return 0;
    }
    // cout<<"----"<<mp.size()<<"---"<<endl;

    // sort(v.begin(),v.end());
    // cout<<((*v.rbegin()-(*v.begin())))<<" ";
    cout<<(mp.rbegin()->first)
            -(mp.begin()->first)<<" ";
    cout<<(mp.begin()->second)*(mp.rbegin()->second);
    return 0;
}