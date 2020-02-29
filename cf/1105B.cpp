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

    ll n,k;
    cin>>n>>k;

    string s,temp;
    cin>>s;
    map<char,ll> mp;
    ll arr[s.size()];
    arr[0]=1;
    if(k == 1)
        mp[s[0]]++;
    for(ll i = 1; i < s.size(); i++)
    {
        if(s[i-1] == s[i])
            arr[i] = arr[i-1]+1;
        else
        {
            arr[i]=1;
        }
        
        if(arr[i]%k == 0)
            mp[s[i]]+=k;

    }
    // for(ll i= 0; i< n;i++)
    //     cout<<arr[i]<<" ";
    // cout<<endl;
    ll mx = 0;
    for(auto it = mp.begin(); it != mp.end(); it++)
    {
        if(mx < it->second)
        {
            mx = it->second;
        }
    }
    if(s.size() == 1)
        cout<<"1";
    else
        cout<<mx/k;

    return 0;
}