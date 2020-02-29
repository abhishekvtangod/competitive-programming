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
    set<ll> s;
    while (n--)
    {
        cin>>x;
        s.insert(x);
    }
    if(s.size() <= 2)
        cout<<"YES\n";
    else if (s.size() == 3)
    {
        vector<ll> v;
        for(auto it = s.begin(); it != s.end(); it++)
        {
            v.push_back(*it);
            // cout<<*it<<" ";
        }
        // cout<<endl;

        if((v[2]-v[1]) == (v[1]-v[0]))
            cout<<"YES\n";
        else
        {
            cout<<"NO\n";
        }
        
    }
    else
    {
        cout<<"NO\n";
    }
    
    

    return 0;
}